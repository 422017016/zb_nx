############################################################################
# arch/arm/src/armv7-m/Toolchain.defs
#
# Setup for the selected toolchain
//安装选择的工具箱

#
# Handle old-style chip-specific toolchain names in the absence of
# a new-style toolchain specification, force the selection of a single
# toolchain and allow the selected toolchain to be overridden by a
# command-line selection.
#

ifeq ($(filter y, \
      $(CONFIG_LPC43_ATOLLIC_LITE) \
      $(CONFIG_STM32_ATOLLIC_LITE) \
      $(CONFIG_LPC43_ATOLLIC_PRO) \
      $(CONFIG_STM32_ATOLLIC_PRO) \
      $(CONFIG_ARMV7M_TOOLCHAIN_ATOLLIC) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= ATOLLIC
endif
ifeq ($(filter y, \
      $(CONFIG_KINETIS_BUILDROOT) \
      $(CONFIG_LM_BUILDROOT) \
      $(CONFIG_LPC17_BUILDROOT) \
      $(CONFIG_LPC43_BUILDROOT) \
      $(CONFIG_SAM3U_BUILDROOT) \
      $(CONFIG_STM32_BUILDROOT) \
      $(CONFIG_ARMV7M_TOOLCHAIN_BUILDROOT) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= BUILDROOT //选择的是这一个-------------------------------
endif
ifeq ($(filter y, \
      $(CONFIG_LPC17_CODEREDL) \
      $(CONFIG_ARMV7M_TOOLCHAIN_CODEREDL) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= CODEREDL
endif
ifeq ($(filter y, \
      $(CONFIG_LPC17_CODEREDW) \
      $(CONFIG_LPC43_CODEREDW) \
      $(CONFIG_ARMV7M_TOOLCHAIN_CODEREDW) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= CODEREDW
endif
ifeq ($(filter y, \
      $(CONFIG_KINETIS_CODESOURCERYL) \
      $(CONFIG_LM_CODESOURCERYL) \
      $(CONFIG_LPC17_CODESOURCERYL) \
      $(CONFIG_LPC43_CODESOURCERYL) \
      $(CONFIG_SAM3U_CODESOURCERYL) \
      $(CONFIG_STM32_CODESOURCERYL) \
      $(CONFIG_ARMV7M_TOOLCHAIN_CODESOURCERYL) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= CODESOURCERYL
endif
ifeq ($(filter y, \
      $(CONFIG_KINETIS_CODESOURCERYW) \
      $(CONFIG_LM_CODESOURCERYW) \
      $(CONFIG_LPC17_CODESOURCERYW) \
      $(CONFIG_LPC43_CODESOURCERYW) \
      $(CONFIG_SAM3U_CODESOURCERYW) \
      $(CONFIG_STM32_CODESOURCERYW) \
      $(CONFIG_ARMV7M_TOOLCHAIN_CODESOURCERYW) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= CODESOURCERYW
endif
ifeq ($(filter y, \
      $(CONFIG_KINETIS_DEVKITARM) \
      $(CONFIG_LM_DEVKITARM) \
      $(CONFIG_LPC17_DEVKITARM) \
      $(CONFIG_LPC43_DEVKITARM) \
      $(CONFIG_SAM3U_DEVKITARM) \
      $(CONFIG_STM32_DEVKITARM) \
      $(CONFIG_ARMV7M_TOOLCHAIN_DEVKITARM) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= DEVKITARM
endif
ifeq ($(filter y, \
      $(CONFIG_ARMV7M_TOOLCHAIN_GNU_EABI) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= GNU_EABI
endif
ifeq ($(filter y, \
      $(CONFIG_STM32_RAISONANCE) \
      $(CONFIG_ARMV7M_TOOLCHAIN_RAISONANCE) \
    ),y)
  CONFIG_ARMV7M_TOOLCHAIN ?= RAISONANCE
endif

#
# Supported toolchains
#
# TODO - It's likely that all of these toolchains now support the
#        CortexM4.  Since they are all GCC-based, we could almost
#        certainly simplify this further.
#
# Each toolchain definition should set:
#
#  CROSSDEV         The GNU toolchain triple (command prefix)
#  ARCROSSDEV       If required, an alternative prefix used when 
#                   invoking ar and nm.
#  ARCHCPUFLAGS     CPU-specific flags selecting the instruction set
#                   FPU options, etc.
#  MAXOPTIMIZATION  The maximum optimization level that results in
#                   reliable code generation.
#

# Atollic toolchain under Windows

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),ATOLLIC)
  CROSSDEV ?= arm-atollic-eabi-
  ARCROSSDEV ?= arm-atollic-eabi-
  ifneq ($(CONFIG_WINDOWS_NATIVE),y)
    WINTOOL = y
  endif
  ifeq ($(CONFIG_ARCH_CORTEXM4),y)
    ifeq ($(CONFIG_ARCH_FPU),y)
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfpu=fpv4-sp-d16 -mfloat-abi=hard
    else
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=soft
    endif
  else ifeq ($(CONFIG_ARCH_CORTEXM3),y)
    ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
  endif
endif

# NuttX buildroot under Linux or Cygwin


//选择的是这个。
ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),BUILDROOT)
ifeq ($(CONFIG_ARMV7M_OABI_TOOLCHAIN),y) //没有设置
  CROSSDEV ?= arm-nuttx-elf-
  ARCROSSDEV ?= arm-nuttx-elf-
  ARCHCPUFLAGS = -mtune=cortex-m3 -march=armv7-m -mfloat-abi=soft
else
  CROSSDEV ?= arm-nuttx-eabi- //选择arm-nuttx-eabi
  ARCROSSDEV ?= arm-nuttx-eabi- 
  ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
endif
  MAXOPTIMIZATION = -Os
endif

# Code Red RedSuite under Linux

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),CODEREDL)
  CROSSDEV ?= arm-none-eabi-
  ARCROSSDEV ?= arm-none-eabi-
  ifeq ($(CONFIG_ARCH_CORTEXM4),y)
    ifeq ($(CONFIG_ARCH_FPU),y)
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfpu=fpv4-sp-d16 -mfloat-abi=hard
    else
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=soft
    endif
  else ifeq ($(CONFIG_ARCH_CORTEXM3),y)
    ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
  endif
endif

# Code Red RedSuite under Windows

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),CODEREDW)
  CROSSDEV ?= arm-none-eabi-
  ARCROSSDEV ?= arm-none-eabi-
  ifneq ($(CONFIG_WINDOWS_NATIVE),y)
    WINTOOL = y
  endif
  ifeq ($(CONFIG_ARCH_CORTEXM4),y)
    ifeq ($(CONFIG_ARCH_FPU),y)
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfpu=fpv4-sp-d16 -mfloat-abi=hard
    else
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=soft
    endif
  else ifeq ($(CONFIG_ARCH_CORTEXM3),y)
    ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
  endif
endif

# CodeSourcery under Linux

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),CODESOURCERYL)
  CROSSDEV ?= arm-none-eabi-
  ARCROSSDEV ?= arm-none-eabi-
  ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
  MAXOPTIMIZATION = -O2
endif

# CodeSourcery under Windows

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),CODESOURCERYW)
  CROSSDEV ?= arm-none-eabi-
  ARCROSSDEV ?= arm-none-eabi-
  ifneq ($(CONFIG_WINDOWS_NATIVE),y)
    WINTOOL = y
  endif
  ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
endif

# devkitARM under Windows

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),DEVKITARM)
  CROSSDEV ?= arm-eabi-
  ARCROSSDEV ?= arm-eabi-
  ifneq ($(CONFIG_WINDOWS_NATIVE),y)
    WINTOOL = y
  endif
  ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
endif

# Generic GNU EABI toolchain on OS X, Linux or any typical Posix system

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),GNU_EABI)
  CROSSDEV ?= arm-none-eabi-
  ARCROSSDEV ?= arm-none-eabi-
  MAXOPTIMIZATION = -O3
  ifeq ($(CONFIG_ARCH_CORTEXM4),y)
    ifeq ($(CONFIG_ARCH_FPU),y)
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfpu=fpv4-sp-d16 -mfloat-abi=hard
    else
      ARCHCPUFLAGS = -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=soft
    endif
  else ifeq ($(CONFIG_ARCH_CORTEXM3),y)
    ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
  endif
endif  

# Raisonance RIDE7 under Windows

ifeq ($(CONFIG_ARMV7M_TOOLCHAIN),RAISONANCE)
  CROSSDEV ?= arm-none-eabi-
  ARCROSSDEV ?= arm-none-eabi-
  ifneq ($(CONFIG_WINDOWS_NATIVE),y)
    WINTOOL = y
  endif
  ARCHCPUFLAGS = -mcpu=cortex-m3 -mthumb -mfloat-abi=soft
endif
