############################################################################
# configs/stm32_tiny/nsh/Make.defs
#

include ${TOPDIR}/.config  //包含配置文件
include ${TOPDIR}/tools/Config.mk //包含环境配置文件
include ${TOPDIR}/arch/arm/src/armv7-m/Toolchain.defs //包含 Nuttx/arch/arm/src/armv7-m/Toolchain.defs

LDSCRIPT = ld.script //链接文件

ifeq ($(WINTOOL),y)
  # Windows-native toolchains
  DIRLINK = $(TOPDIR)/tools/copydir.sh
  DIRUNLINK = $(TOPDIR)/tools/unlink.sh
  MKDEP = $(TOPDIR)/tools/mknulldeps.sh
  ARCHINCLUDES = -I. -isystem "${shell cygpath -w $(TOPDIR)/include}"
  ARCHXXINCLUDES = -I. -isystem "${shell cygpath -w $(TOPDIR)/include}" -isystem "${shell cygpath -w $(TOPDIR)/include/cxx}"
  ARCHSCRIPT = -T "${shell cygpath -w $(TOPDIR)/configs/$(CONFIG_ARCH_BOARD)/scripts/$(LDSCRIPT)}"
  MAXOPTIMIZATION = -O2
else
  # Linux/Cygwin-native toolchain 
  MKDEP = $(TOPDIR)/tools/mkdeps.sh  //makeDEP
  ARCHINCLUDES = -I. -isystem $(TOPDIR)/include //架构包含 Nuttx/include
  ARCHXXINCLUDES = -I. -isystem $(TOPDIR)/include -isystem $(TOPDIR)/include/cxx //架构头文件 Nuttx/include Nuttx/include/cxx
  ARCHSCRIPT = -T$(TOPDIR)/configs/$(CONFIG_ARCH_BOARD)/scripts/$(LDSCRIPT) //架构脚本 Nuttx/configs/stm32_tiny/scripts/ld.script
endif

CC = $(CROSSDEV)gcc
CXX = $(CROSSDEV)g++
CPP = $(CROSSDEV)gcc -E
LD = $(CROSSDEV)ld
AR = $(CROSSDEV)ar rcs
NM = $(CROSSDEV)nm
OBJCOPY = $(CROSSDEV)objcopy
OBJDUMP = $(CROSSDEV)objdump

ARCHCCVERSION = ${shell $(CC) -v 2>&1 | sed -n '/^gcc version/p' | sed -e 's/^gcc version \([0-9\.]\)/\1/g' -e 's/[-\ ].*//g' -e '1q'}
ARCHCCMAJOR = ${shell echo $(ARCHCCVERSION) | cut -d'.' -f1}

ifeq ($(CONFIG_DEBUG_SYMBOLS),y)
  ARCHOPTIMIZATION = -g -Os
else
  ARCHOPTIMIZATION = $(MAXOPTIMIZATION) -fno-strict-aliasing -fno-strength-reduce -fomit-frame-pointer
endif

ARCHCFLAGS = -fno-builtin
ARCHCXXFLAGS = -fno-builtin -fno-exceptions
ARCHWARNINGS = -Wall -Wstrict-prototypes -Wshadow
ARCHWARNINGSXX = -Wall -Wshadow
ARCHDEFINES =
ARCHPICFLAGS = -fpic -msingle-pic-base -mpic-register=r10

CFLAGS = $(ARCHCFLAGS) $(ARCHWARNINGS) $(ARCHOPTIMIZATION) $(ARCHCPUFLAGS) $(ARCHINCLUDES) $(ARCHDEFINES) $(EXTRADEFINES) -pipe
CPICFLAGS = $(ARCHPICFLAGS) $(CFLAGS)
CXXFLAGS = $(ARCHCXXFLAGS) $(ARCHWARNINGSXX) $(ARCHOPTIMIZATION) $(ARCHCPUFLAGS) $(ARCHXXINCLUDES) $(ARCHDEFINES) $(EXTRADEFINES) -pipe
CXXPICFLAGS = $(ARCHPICFLAGS) $(CXXFLAGS)
CPPFLAGS = $(ARCHINCLUDES) $(ARCHDEFINES) $(EXTRADEFINES)
AFLAGS = $(CFLAGS) -D__ASSEMBLY__

NXFLATLDFLAGS1 = -r -d -warn-common
NXFLATLDFLAGS2 = $(NXFLATLDFLAGS1) -T$(TOPDIR)/binfmt/libnxflat/gnu-nxflat-pcrel.ld -no-check-sections
LDNXFLATFLAGS = -e main -s 2048

OBJEXT = .o
LIBEXT = .a
EXEEXT =

ifneq ($(CROSSDEV),arm-nuttx-elf-)
  LDFLAGS += -nostartfiles -nodefaultlibs
endif
ifeq ($(CONFIG_DEBUG_SYMBOLS),y)
  LDFLAGS += -g
endif


HOSTCC = gcc
HOSTINCLUDES = -I.
HOSTCFLAGS = -Wall -Wstrict-prototypes -Wshadow -g -pipe
HOSTLDFLAGS =

