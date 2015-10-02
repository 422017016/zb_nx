############################################################################
# Config.mk
# Global build rules and macros.
#
//ȫ�ֹ�������ͺ�ָ��

#
# This file (along with $(TOPDIR)/.config) must be included by every
# configuration-specific Make.defs file.
#
//����ļ��� Nuttx/.config��һ�𣬱��뱻ÿһ���������õ� Make.defs �ļ�����


# These are configuration variables that are quoted by configuration tool
# but which must be unquoated when used in the build system.
//��Щ���ñ����������ù������õģ����Ǳ����ڹ���ϵͳʱȥ����

CONFIG_ARCH       := $(patsubst "%",%,$(strip $(CONFIG_ARCH))) // ȥ��.config��CONFIG_ARCH = "arm" ��˫���� ���յõ� arm
CONFIG_ARCH_CHIP  := $(patsubst "%",%,$(strip $(CONFIG_ARCH_CHIP))) // stm32
CONFIG_ARCH_BOARD := $(patsubst "%",%,$(strip $(CONFIG_ARCH_BOARD))) // stm32_tiny

# Some defaults just to prohibit some bad behavior if for some reason they
# are not defined
//һЩĬ��ֵֻ�ܱ���һЩbad behavior ������һЩԭ������û�б�����

OBJEXT ?= .o //objext = .o
LIBEXT ?= .a //libext = .a

# DELIM - Path segment delimiter character
#
# Depends on this settings defined in board-specific defconfig file installed
# at $(TOPDIR)/.config:
#
#   CONFIG_WINDOWS_NATIVE - Defined for a Windows native build
//·���ָ�� ���ݾ������ѡ�����������������

ifeq ($(CONFIG_WINDOWS_NATIVE),y)
  DELIM = $(strip \) //windows�·ָ���Ϊ \
else
  DELIM = $(strip /) //�����Ļ�Ϊ /
endif

# INCDIR - Convert a list of directory paths to a list of compiler include
#   directirves
# Example: CFFLAGS += ${shell $(INCDIR) [options] "compiler" "dir1" "dir2" "dir2" ...}
//��Ŀ¼·��ת��Ϊ�������·��

#
# Note that the compiler string and each directory path string must quoted if
# they contain spaces or any other characters that might get mangled by the
# shell
#
# Depends on this setting passed as a make commaond line definition from the
# toplevel Makefile:
#
#   TOPDIR - The path to the the top level NuttX directory in the form
#     appropriate for the current build environment
#
# Depends on this settings defined in board-specific defconfig file installed
# at $(TOPDIR)/.config:
#
#   CONFIG_WINDOWS_NATIVE - Defined for a Windows native build
//ע�⣺�������ַ�����ÿ��Ŀ¼�ַ������뱻���ã�������ǰ����ո����������ĸ��������shell����

ifeq ($(CONFIG_WINDOWS_NATIVE),y)
  INCDIR = "$(TOPDIR)\tools\incdir.bat"
else
  INCDIR = "$(TOPDIR)/tools/incdir.sh" //����������ѡ��
endif

# PREPROCESS - Default macro to run the C pre-processor
# Example: $(call PREPROCESS, in-file, out-file)
#
# Depends on these settings defined in board-specific Make.defs file
# installed at $(TOPDIR)/Make.defs:
#
#   CPP - The command to invoke the C pre-processor
#   CPPFLAGS - Options to pass to the C pre-processor

define PREPROCESS
	@echo "CPP: $1->$2"
	$(Q) $(CPP) $(CPPFLAGS) $1 -o $2
endef

# COMPILE - Default macro to compile one C file
# Example: $(call COMPILE, in-file, out-file)
#
# Depends on these settings defined in board-specific Make.defs file
# installed at $(TOPDIR)/Make.defs:
#
#   CC - The command to invoke the C compiler
#   CFLAGS - Options to pass to the C compiler
#   CCACHE - optional path to ccache

define COMPILE
	@echo "CC: $1"
	$(Q) $(CCACHE) $(CC) -c $(CFLAGS) $1 -o $2
endef

# COMPILEXX - Default macro to compile one C++ file
# Example: $(call COMPILEXX, in-file, out-file)
#
# Depends on these settings defined in board-specific Make.defs file
# installed at $(TOPDIR)/Make.defs:
#
#   CXX - The command to invoke the C++ compiler
#   CXXFLAGS - Options to pass to the C++ compiler
#   CCACHE - optional path to ccache

define COMPILEXX
	@echo "CXX: $1"
	$(Q) $(CCACHE) $(CXX) -c $(CXXFLAGS) $1 -o $2
endef

# ASSEMBLE - Default macro to assemble one assembly language file
# Example: $(call ASSEMBLE, in-file, out-file)
#
# NOTE that the most common toolchain, GCC, uses the compiler to assemble
# files because this has the advantage of running the C Pre-Processor against
# the assembly language files.  This is not possible with other toolchains;
# platforms using those other tools should define AS and over-ride this
# definition in order to use the assembler directly.
#
# Depends on these settings defined in board-specific Make.defs file
# installed at $(TOPDIR)/Make.defs:
#
#   CC - By default, the C compiler is used to compile assembly language
#        files
#   AFLAGS - Options to pass to the C+compiler

define ASSEMBLE
	@echo "AS: $1"
	$(Q) $(CC) -c $(AFLAGS) $1 -o $2
endef

# ARCHIVE - Add a list of files to an archive
# Example: $(call ARCHIVE, archive-file, "file1 file2 file3 ...")
#
# Note: The fileN strings may not contain spaces or  characters that may be
# interpreted strangely by the shell
#
# Depends on these settings defined in board-specific Make.defs file
# installed at $(TOPDIR)/Make.defs:
#
#   AR - The command to invoke the archiver (includes any options)
#
# Depends on this settings defined in board-specific defconfig file installed
# at $(TOPDIR)/.config:
#
#   CONFIG_WINDOWS_NATIVE - Defined for a Windows native build

ifeq ($(CONFIG_WINDOWS_NATIVE),y)
define ARCHIVE
	@echo AR: $2
	$(Q) $(AR) $1 $(2)
endef
else
define ARCHIVE
	@echo "AR: $2"
	$(Q) $(AR) $1 $(2) || { echo "$(AR) $1 FAILED!" ; exit 1 ; }
endef
endif

# DELFILE - Delete one file

ifeq ($(CONFIG_WINDOWS_NATIVE),y)
define DELFILE
	$(Q) if exist $1 (del /f /q $1)
endef
else
define DELFILE
	$(Q) rm -f $1
endef
endif

# DELDIR - Delect one directory

ifeq ($(CONFIG_WINDOWS_NATIVE),y)
define DELDIR
	$(Q) if exist $1 (rmdir /q /s $1)
endef
else
define DELDIR
	$(Q) rm -rf $1
endef
endif

# CLEAN - Default clean target

ifeq ($(CONFIG_WINDOWS_NATIVE),y)
define CLEAN
	$(Q) if exist *$(OBJEXT) (del /f /q *$(OBJEXT))
	$(Q) if exist *$(LIBEXT) (del /f /q *$(LIBEXT))
	$(Q) if exist *~ (del /f /q *~)
	$(Q) if exist (del /f /q  .*.swp)
endef
else
define CLEAN
	$(Q) rm -f *$(OBJEXT) *$(LIBEXT) *~ .*.swp
endef
endif
 