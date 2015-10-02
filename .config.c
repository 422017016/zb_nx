#
# Automatically generated file; DO NOT EDIT.
# Nuttx/ Configuration
#
CONFIG_NUTTX_NEWCONFIG=y

#
# Build Setup
#
# CONFIG_EXPERIMENTAL is not set
CONFIG_HOST_LINUX=y
# CONFIG_HOST_OSX is not set
# CONFIG_HOST_WINDOWS is not set
# CONFIG_HOST_OTHER is not set

#
# Build Configuration
#
# CONFIG_APPS_DIR="../apps"
# CONFIG_BUILD_2PASS is not set

#
# Binary Output Formats
#
# CONFIG_RRLOAD_BINARY is not set
# CONFIG_INTELHEX_BINARY is not set
# CONFIG_MOTOROLA_SREC is not set
CONFIG_RAW_BINARY=y

#
# Customize Header Files
#
# CONFIG_ARCH_STDBOOL_H is not set
# CONFIG_ARCH_MATH_H is not set
# CONFIG_ARCH_FLOAT_H is not set
# CONFIG_ARCH_STDARG_H is not set

#
# Debug Options
#
# CONFIG_DEBUG is not set
# CONFIG_DEBUG_SYMBOLS is not set

#
# System Type
#
# CONFIG_ARCH_8051 is not set
CONFIG_ARCH_ARM=y
# CONFIG_ARCH_AVR is not set
# CONFIG_ARCH_HC is not set
# CONFIG_ARCH_MIPS is not set
# CONFIG_ARCH_RGMP is not set
# CONFIG_ARCH_SH is not set
# CONFIG_ARCH_SIM is not set
# CONFIG_ARCH_X86 is not set
# CONFIG_ARCH_Z16 is not set
# CONFIG_ARCH_Z80 is not set
CONFIG_ARCH="arm"

#
# ARM Options
#
# CONFIG_ARCH_CHIP_C5471 is not set
# CONFIG_ARCH_CHIP_CALYPSO is not set
# CONFIG_ARCH_CHIP_DM320 is not set
# CONFIG_ARCH_CHIP_IMX is not set
# CONFIG_ARCH_CHIP_KINETIS is not set
# CONFIG_ARCH_CHIP_KL is not set
# CONFIG_ARCH_CHIP_LM is not set
# CONFIG_ARCH_CHIP_LPC17XX is not set
# CONFIG_ARCH_CHIP_LPC214X is not set
# CONFIG_ARCH_CHIP_LPC2378 is not set
# CONFIG_ARCH_CHIP_LPC31XX is not set
# CONFIG_ARCH_CHIP_LPC43XX is not set
# CONFIG_ARCH_CHIP_NUC1XX is not set
# CONFIG_ARCH_CHIP_SAM3U is not set
CONFIG_ARCH_CHIP_STM32=y
# CONFIG_ARCH_CHIP_STR71X is not set
CONFIG_ARCH_CORTEXM3=y
CONFIG_ARCH_FAMILY="armv7-m"
CONFIG_ARCH_CHIP="stm32"
# CONFIG_ARMV7M_USEBASEPRI is not set
CONFIG_ARCH_HAVE_CMNVECTOR=y
# CONFIG_ARMV7M_CMNVECTOR is not set
CONFIG_ARCH_HAVE_MPU=y
# CONFIG_ARMV7M_MPU is not set

#
# ARMV7M Configuration Options
#
CONFIG_ARMV7M_TOOLCHAIN_BUILDROOT=y
# CONFIG_ARMV7M_TOOLCHAIN_CODEREDL is not set
# CONFIG_ARMV7M_TOOLCHAIN_CODESOURCERYL is not set
# CONFIG_ARMV7M_TOOLCHAIN_GNU_EABI is not set
# CONFIG_ARMV7M_OABI_TOOLCHAIN is not set
CONFIG_SERIAL_TERMIOS=y

#
# STM32 Configuration Options
#
# CONFIG_ARCH_CHIP_STM32L151C6 is not set
# CONFIG_ARCH_CHIP_STM32L151C8 is not set
# CONFIG_ARCH_CHIP_STM32L151CB is not set
# CONFIG_ARCH_CHIP_STM32L151R6 is not set
# CONFIG_ARCH_CHIP_STM32L151R8 is not set
# CONFIG_ARCH_CHIP_STM32L151RB is not set
# CONFIG_ARCH_CHIP_STM32L151V6 is not set
# CONFIG_ARCH_CHIP_STM32L151V8 is not set
# CONFIG_ARCH_CHIP_STM32L151VB is not set
# CONFIG_ARCH_CHIP_STM32L152C6 is not set
# CONFIG_ARCH_CHIP_STM32L152C8 is not set
# CONFIG_ARCH_CHIP_STM32L152CB is not set
# CONFIG_ARCH_CHIP_STM32L152R6 is not set
# CONFIG_ARCH_CHIP_STM32L152R8 is not set
# CONFIG_ARCH_CHIP_STM32L152RB is not set
# CONFIG_ARCH_CHIP_STM32L152V6 is not set
# CONFIG_ARCH_CHIP_STM32L152V8 is not set
# CONFIG_ARCH_CHIP_STM32L152VB is not set
# CONFIG_ARCH_CHIP_STM32F100C8 is not set
# CONFIG_ARCH_CHIP_STM32F100CB is not set
# CONFIG_ARCH_CHIP_STM32F100R8 is not set
# CONFIG_ARCH_CHIP_STM32F100RB is not set
# CONFIG_ARCH_CHIP_STM32F100RC is not set
# CONFIG_ARCH_CHIP_STM32F100RD is not set
# CONFIG_ARCH_CHIP_STM32F100RE is not set
# CONFIG_ARCH_CHIP_STM32F100V8 is not set
# CONFIG_ARCH_CHIP_STM32F100VB is not set
# CONFIG_ARCH_CHIP_STM32F100VC is not set
# CONFIG_ARCH_CHIP_STM32F100VD is not set
# CONFIG_ARCH_CHIP_STM32F100VE is not set
# CONFIG_ARCH_CHIP_STM32F103C4 is not set
CONFIG_ARCH_CHIP_STM32F103C8=y
# CONFIG_ARCH_CHIP_STM32F103RET6 is not set
# CONFIG_ARCH_CHIP_STM32F103VCT6 is not set
# CONFIG_ARCH_CHIP_STM32F103VET6 is not set
# CONFIG_ARCH_CHIP_STM32F103ZET6 is not set
# CONFIG_ARCH_CHIP_STM32F105VBT7 is not set
# CONFIG_ARCH_CHIP_STM32F107VC is not set
# CONFIG_ARCH_CHIP_STM32F207IG is not set
# CONFIG_ARCH_CHIP_STM32F302CB is not set
# CONFIG_ARCH_CHIP_STM32F302CC is not set
# CONFIG_ARCH_CHIP_STM32F302RB is not set
# CONFIG_ARCH_CHIP_STM32F302RC is not set
# CONFIG_ARCH_CHIP_STM32F302VB is not set
# CONFIG_ARCH_CHIP_STM32F302VC is not set
# CONFIG_ARCH_CHIP_STM32F303CB is not set
# CONFIG_ARCH_CHIP_STM32F303CC is not set
# CONFIG_ARCH_CHIP_STM32F303RB is not set
# CONFIG_ARCH_CHIP_STM32F303RC is not set
# CONFIG_ARCH_CHIP_STM32F303VB is not set
# CONFIG_ARCH_CHIP_STM32F303VC is not set
# CONFIG_ARCH_CHIP_STM32F405RG is not set
# CONFIG_ARCH_CHIP_STM32F405VG is not set
# CONFIG_ARCH_CHIP_STM32F405ZG is not set
# CONFIG_ARCH_CHIP_STM32F407VE is not set
# CONFIG_ARCH_CHIP_STM32F407VG is not set
# CONFIG_ARCH_CHIP_STM32F407ZE is not set
# CONFIG_ARCH_CHIP_STM32F407ZG is not set
# CONFIG_ARCH_CHIP_STM32F407IE is not set
# CONFIG_ARCH_CHIP_STM32F407IG is not set
# CONFIG_ARCH_CHIP_STM32F427V is not set
# CONFIG_ARCH_CHIP_STM32F427Z is not set
# CONFIG_ARCH_CHIP_STM32F427I is not set
# CONFIG_STM32_STM32L15XX is not set
# CONFIG_STM32_ENERGYLITE is not set
CONFIG_STM32_STM32F10XX=y
# CONFIG_STM32_VALUELINE is not set
# CONFIG_STM32_CONNECTIVITYLINE is not set
CONFIG_STM32_PERFORMANCELINE=y
# CONFIG_STM32_HIGHDENSITY is not set
CONFIG_STM32_MEDIUMDENSITY=y
# CONFIG_STM32_LOWDENSITY is not set
# CONFIG_STM32_STM32F20XX is not set
# CONFIG_STM32_STM32F30XX is not set
# CONFIG_STM32_STM32F40XX is not set
# CONFIG_STM32_DFU is not set

#
# STM32 Peripheral Support
#
# CONFIG_STM32_ADC1 is not set
# CONFIG_STM32_ADC2 is not set
# CONFIG_STM32_ADC3 is not set
# CONFIG_STM32_BKP is not set
# CONFIG_STM32_CAN1 is not set
# CONFIG_STM32_CRC is not set
# CONFIG_STM32_DMA1 is not set
# CONFIG_STM32_DMA2 is not set
# CONFIG_STM32_DAC1 is not set
# CONFIG_STM32_DAC2 is not set
# CONFIG_STM32_I2C1 is not set
# CONFIG_STM32_I2C2 is not set
# CONFIG_STM32_PWR is not set
# CONFIG_STM32_SDIO is not set
# CONFIG_STM32_SPI1 is not set
CONFIG_STM32_SPI2=y
# CONFIG_STM32_TIM1 is not set
# CONFIG_STM32_TIM2 is not set
# CONFIG_STM32_TIM3 is not set
# CONFIG_STM32_TIM4 is not set
# CONFIG_STM32_TIM5 is not set
# CONFIG_STM32_TIM6 is not set
# CONFIG_STM32_TIM7 is not set
# CONFIG_STM32_TIM8 is not set
CONFIG_STM32_USART1=y
# CONFIG_STM32_USART2 is not set
# CONFIG_STM32_USART3 is not set
# CONFIG_STM32_UART4 is not set
# CONFIG_STM32_UART5 is not set
# CONFIG_STM32_USB is not set
# CONFIG_STM32_IWDG is not set
# CONFIG_STM32_WWDG is not set
CONFIG_STM32_SPI=y

#
# Alternate Pin Mapping
#
# CONFIG_STM32_USART1_REMAP is not set
# CONFIG_STM32_JTAG_DISABLE is not set
CONFIG_STM32_JTAG_FULL_ENABLE=y
# CONFIG_STM32_JTAG_NOJNTRST_ENABLE is not set
# CONFIG_STM32_JTAG_SW_ENABLE is not set
CONFIG_STM32_DISABLE_IDLE_SLEEP_DURING_DEBUG=y
# CONFIG_STM32_FORCEPOWER is not set
# CONFIG_ARCH_BOARD_STM32_CUSTOM_CLOCKCONFIG is not set
CONFIG_STM32_USART=y

#
# U[S]ART Configuration
#
# CONFIG_USART1_RS485 is not set
# CONFIG_STM32_USART_SINGLEWIRE is not set

#
# SPI Configuration
#
# CONFIG_STM32_SPI_INTERRUPTS is not set
# CONFIG_STM32_SPI_DMA is not set

#
# USB Host Configuration
#

#
# USB Device Configuration
#

#
# External Memory Configuration
#

#
# Architecture Options
#
# CONFIG_ARCH_NOINTC is not set
# CONFIG_ARCH_VECNOTIRQ is not set
# CONFIG_ARCH_DMA is not set
CONFIG_ARCH_IRQPRIO=y
# CONFIG_CUSTOM_STACK is not set
# CONFIG_ADDRENV is not set
CONFIG_ARCH_HAVE_VFORK=y
CONFIG_ARCH_STACKDUMP=y
# CONFIG_ENDIAN_BIG is not set
# CONFIG_ARCH_HAVE_RAMFUNCS is not set
CONFIG_ARCH_HAVE_RAMVECTORS=y
# CONFIG_ARCH_RAMVECTORS is not set

#
# Board Settings
#
CONFIG_BOARD_LOOPSPERMSEC=5483
# CONFIG_ARCH_CALIBRATION is not set
CONFIG_DRAM_START=0x20000000
CONFIG_DRAM_SIZE=20480
CONFIG_ARCH_HAVE_INTERRUPTSTACK=y
CONFIG_ARCH_INTERRUPTSTACK=0

#
# Boot options
#
# CONFIG_BOOT_RUNFROMEXTSRAM is not set
CONFIG_BOOT_RUNFROMFLASH=y
# CONFIG_BOOT_RUNFROMISRAM is not set
# CONFIG_BOOT_RUNFROMSDRAM is not set
# CONFIG_BOOT_COPYTORAM is not set

#
# Board Selection
#
CONFIG_ARCH_BOARD_STM32_TINY=y
# CONFIG_ARCH_BOARD_CUSTOM is not set
CONFIG_ARCH_BOARD="stm32_tiny"

#
# Common Board Options
#
CONFIG_ARCH_HAVE_LEDS=y
CONFIG_ARCH_LEDS=y
CONFIG_NSH_MMCSDMINOR=0

#
# Board-Specific Options
#

#
# RTOS Features
#
# CONFIG_BOARD_INITIALIZE is not set
CONFIG_MSEC_PER_TICK=10
CONFIG_RR_INTERVAL=200
# CONFIG_SCHED_INSTRUMENTATION is not set
CONFIG_TASK_NAME_SIZE=0
# CONFIG_SCHED_HAVE_PARENT is not set
# CONFIG_JULIAN_TIME is not set
CONFIG_START_YEAR=2011
CONFIG_START_MONTH=7
CONFIG_START_DAY=5
CONFIG_DEV_CONSOLE=y
# CONFIG_MUTEX_TYPES is not set
# CONFIG_PRIORITY_INHERITANCE is not set
# CONFIG_FDCLONE_DISABLE is not set
# CONFIG_FDCLONE_STDIO is not set
CONFIG_SDCLONE_DISABLE=y
CONFIG_SCHED_WAITPID=y
# CONFIG_SCHED_STARTHOOK is not set
# CONFIG_SCHED_ATEXIT is not set
# CONFIG_SCHED_ONEXIT is not set
CONFIG_USER_ENTRYPOINT="nsh_main"
# CONFIG_DISABLE_OS_API is not set

#
# Signal Numbers
#
CONFIG_SIG_SIGUSR1=1
CONFIG_SIG_SIGUSR2=2
CONFIG_SIG_SIGALARM=3
CONFIG_SIG_SIGCONDTIMEDOUT=16
CONFIG_SIG_SIGWORK=17

#
# Sizes of configurable things (0 disables)
#
CONFIG_MAX_TASKS=16
CONFIG_MAX_TASK_ARGS=4
CONFIG_NPTHREAD_KEYS=4
CONFIG_NFILE_DESCRIPTORS=8
CONFIG_NFILE_STREAMS=8
CONFIG_NAME_MAX=32
CONFIG_PREALLOC_MQ_MSGS=4
CONFIG_MQ_MAXMSGSIZE=32
CONFIG_MAX_WDOGPARMS=2
CONFIG_PREALLOC_WDOGS=4
CONFIG_PREALLOC_TIMERS=4

#
# Stack and heap information
#
CONFIG_IDLETHREAD_STACKSIZE=1024
CONFIG_USERMAIN_STACKSIZE=2048
CONFIG_PTHREAD_STACK_MIN=256
CONFIG_PTHREAD_STACK_DEFAULT=2048

#
# Device Drivers
#
# CONFIG_DISABLE_POLL is not set
CONFIG_DEV_NULL=y
# CONFIG_DEV_ZERO is not set
# CONFIG_LOOP is not set
# CONFIG_RAMDISK is not set
# CONFIG_CAN is not set
# CONFIG_PWM is not set
# CONFIG_I2C is not set
CONFIG_ARCH_HAVE_I2CRESET=y
CONFIG_SPI=y
CONFIG_SPI_OWNBUS=y
CONFIG_SPI_EXCHANGE=y
# CONFIG_SPI_CMDDATA is not set
# CONFIG_RTC is not set
# CONFIG_WATCHDOG is not set
# CONFIG_ANALOG is not set
# CONFIG_AUDIO_DEVICES is not set
# CONFIG_BCH is not set
# CONFIG_INPUT is not set
# CONFIG_LCD is not set
# CONFIG_MMCSD is not set
# CONFIG_MTD is not set
# CONFIG_PIPES is not set
# CONFIG_PM is not set
# CONFIG_POWER is not set
# CONFIG_SENSORS is not set
CONFIG_SERIAL=y
# CONFIG_DEV_LOWCONSOLE is not set
# CONFIG_16550_UART is not set
CONFIG_ARCH_HAVE_USART1=y
CONFIG_MCU_SERIAL=y
CONFIG_STANDARD_SERIAL=y
CONFIG_SERIAL_NPOLLWAITERS=2
CONFIG_USART1_SERIAL_CONSOLE=y
# CONFIG_NO_SERIAL_CONSOLE is not set

#
# USART1 Configuration
#
CONFIG_USART1_RXBUFSIZE=256
CONFIG_USART1_TXBUFSIZE=256
CONFIG_USART1_BAUD=115200
CONFIG_USART1_BITS=8
CONFIG_USART1_PARITY=0
CONFIG_USART1_2STOP=0
# CONFIG_USBDEV is not set
# CONFIG_USBHOST is not set
CONFIG_WIRELESS=y
# CONFIG_WL_CC1101 is not set
CONFIG_WL_NRF24L01=y
CONFIG_WL_NRF24L01_DFLT_ADDR_WIDTH=5
CONFIG_WL_NRF24L01_CHECK_PARAMS=y
CONFIG_WL_NRF24L01_RXSUPPORT=y
CONFIG_WL_NRF24L01_RXFIFO_LEN=128

#
# System Logging Device Options
#

#
# System Logging
#
# CONFIG_RAMLOG is not set

#
# Networking Support
#
# CONFIG_NET is not set

#
# File Systems
#

#
# File system configuration
#
# CONFIG_DISABLE_MOUNTPOINT is not set
# CONFIG_FS_RAMMAP is not set
# CONFIG_FS_FAT is not set
# CONFIG_FS_NXFFS is not set
# CONFIG_FS_ROMFS is not set
# CONFIG_FS_SMARTFS is not set
# CONFIG_FS_BINFS is not set

#
# System Logging
#
# CONFIG_SYSLOG_ENABLE is not set
# CONFIG_SYSLOG is not set

#
# Graphics Support
#
# CONFIG_NX is not set

#
# Memory Management
#
# CONFIG_MM_MULTIHEAP is not set
# CONFIG_MM_SMALL is not set
CONFIG_MM_REGIONS=1
# CONFIG_GRAN is not set

#
# Audio Support
#
# CONFIG_AUDIO is not set

#
# Binary Formats
#
# CONFIG_BINFMT_DISABLE is not set
# CONFIG_BINFMT_EXEPATH is not set
# CONFIG_NXFLAT is not set
# CONFIG_ELF is not set
CONFIG_BUILTIN=y
# CONFIG_PIC is not set
CONFIG_SYMTAB_ORDEREDBYNAME=y

#
# Library Routines
#

#
# Standard C Library Options
#
CONFIG_STDIO_BUFFER_SIZE=64
CONFIG_STDIO_LINEBUFFER=y
CONFIG_NUNGET_CHARS=2
CONFIG_LIB_HOMEDIR="/"
# CONFIG_LIBM is not set
# CONFIG_NOPRINTF_FIELDWIDTH is not set
# CONFIG_LIBC_FLOATINGPOINT is not set
CONFIG_LIB_RAND_ORDER=1
# CONFIG_EOL_IS_CR is not set
# CONFIG_EOL_IS_LF is not set
# CONFIG_EOL_IS_BOTH_CRLF is not set
CONFIG_EOL_IS_EITHER_CRLF=y
# CONFIG_LIBC_EXECFUNCS is not set
CONFIG_POSIX_SPAWN_PROXY_STACKSIZE=1024
CONFIG_TASK_SPAWN_DEFAULT_STACKSIZE=2048
# CONFIG_LIBC_STRERROR is not set
# CONFIG_LIBC_PERROR_STDOUT is not set
CONFIG_ARCH_LOWPUTC=y
CONFIG_LIB_SENDFILE_BUFSIZE=512
# CONFIG_ARCH_ROMGETC is not set
# CONFIG_ARCH_OPTIMIZED_FUNCTIONS is not set

#
# Non-standard Library Support
#
CONFIG_SCHED_WORKQUEUE=y
CONFIG_SCHED_HPWORK=y
CONFIG_SCHED_WORKPRIORITY=192
CONFIG_SCHED_WORKPERIOD=50000
CONFIG_SCHED_WORKSTACKSIZE=2048
# CONFIG_SCHED_LPWORK is not set
# CONFIG_LIB_KBDCODEC is not set
# CONFIG_LIB_SLCDCODEC is not set

#
# Basic CXX Support
#
# CONFIG_C99_BOOL8 is not set
# CONFIG_HAVE_CXX is not set

#
# Application Configuration
#

#
# Built-In Applications
#
CONFIG_BUILTIN_PROXY_STACKSIZE=1024

#
# Examples
#
# CONFIG_EXAMPLES_BUTTONS is not set
# CONFIG_EXAMPLES_CAN is not set
# CONFIG_EXAMPLES_COMPOSITE is not set
# CONFIG_EXAMPLES_DHCPD is not set
# CONFIG_EXAMPLES_ELF is not set
# CONFIG_EXAMPLES_FTPC is not set
# CONFIG_EXAMPLES_FTPD is not set
# CONFIG_EXAMPLES_HELLO is not set
# CONFIG_EXAMPLES_HELLOXX is not set
# CONFIG_EXAMPLES_JSON is not set
# CONFIG_EXAMPLES_HIDKBD is not set
# CONFIG_EXAMPLES_KEYPADTEST is not set
# CONFIG_EXAMPLES_IGMP is not set
# CONFIG_EXAMPLES_LCDRW is not set
# CONFIG_EXAMPLES_MM is not set
# CONFIG_EXAMPLES_MODBUS is not set
# CONFIG_EXAMPLES_MOUNT is not set
CONFIG_EXAMPLES_NRF24L01TERM=y
CONFIG_EXAMPLES_NSH=y
# CONFIG_EXAMPLES_NULL is not set
# CONFIG_EXAMPLES_NX is not set
# CONFIG_EXAMPLES_NXCONSOLE is not set
# CONFIG_EXAMPLES_NXFFS is not set
# CONFIG_EXAMPLES_NXFLAT is not set
# CONFIG_EXAMPLES_NXHELLO is not set
# CONFIG_EXAMPLES_NXIMAGE is not set
# CONFIG_EXAMPLES_NXLINES is not set
# CONFIG_EXAMPLES_NXTEXT is not set
# CONFIG_EXAMPLES_OSTEST is not set
# CONFIG_EXAMPLES_PASHELLO is not set
# CONFIG_EXAMPLES_PIPE is not set
# CONFIG_EXAMPLES_POSIXSPAWN is not set
# CONFIG_EXAMPLES_QENCODER is not set
# CONFIG_EXAMPLES_RGMP is not set
# CONFIG_EXAMPLES_ROMFS is not set
# CONFIG_EXAMPLES_SENDMAIL is not set
# CONFIG_EXAMPLES_SERLOOP is not set
# CONFIG_EXAMPLES_SLCD is not set
# CONFIG_EXAMPLES_SMART_TEST is not set
# CONFIG_EXAMPLES_SMART is not set
# CONFIG_EXAMPLES_TCPECHO is not set
# CONFIG_EXAMPLES_TELNETD is not set
# CONFIG_EXAMPLES_THTTPD is not set
# CONFIG_EXAMPLES_TIFF is not set
# CONFIG_EXAMPLES_TOUCHSCREEN is not set
# CONFIG_EXAMPLES_UDP is not set
# CONFIG_EXAMPLES_UIP is not set
# CONFIG_EXAMPLES_USBSERIAL is not set
# CONFIG_EXAMPLES_USBMSC is not set
# CONFIG_EXAMPLES_USBTERM is not set
# CONFIG_EXAMPLES_WATCHDOG is not set

#
# Graphics Support
#
# CONFIG_TIFF is not set

#
# Interpreters
#
# CONFIG_INTERPRETERS_FICL is not set
# CONFIG_INTERPRETERS_PCODE is not set

#
# Network Utilities
#

#
# Networking Utilities
#
# CONFIG_NETUTILS_CODECS is not set
# CONFIG_NETUTILS_DHCPC is not set
# CONFIG_NETUTILS_DHCPD is not set
# CONFIG_NETUTILS_FTPC is not set
# CONFIG_NETUTILS_FTPD is not set
# CONFIG_NETUTILS_JSON is not set
# CONFIG_NETUTILS_RESOLV is not set
# CONFIG_NETUTILS_SMTP is not set
# CONFIG_NETUTILS_TELNETD is not set
# CONFIG_NETUTILS_TFTPC is not set
# CONFIG_NETUTILS_THTTPD is not set
# CONFIG_NETUTILS_UIPLIB is not set
# CONFIG_NETUTILS_WEBCLIENT is not set

#
# FreeModBus
#
# CONFIG_MODBUS is not set

#
# NSH Library
#
CONFIG_NSH_LIBRARY=y
CONFIG_NSH_BUILTIN_APPS=y

#
# Disable Individual commands
#
# CONFIG_NSH_DISABLE_CAT is not set
# CONFIG_NSH_DISABLE_CD is not set
# CONFIG_NSH_DISABLE_CP is not set
# CONFIG_NSH_DISABLE_DD is not set
# CONFIG_NSH_DISABLE_ECHO is not set
# CONFIG_NSH_DISABLE_EXEC is not set
# CONFIG_NSH_DISABLE_EXIT is not set
# CONFIG_NSH_DISABLE_FREE is not set
# CONFIG_NSH_DISABLE_GET is not set
# CONFIG_NSH_DISABLE_HELP is not set
# CONFIG_NSH_DISABLE_HEXDUMP is not set
CONFIG_NSH_DISABLE_IFCONFIG=y
# CONFIG_NSH_DISABLE_KILL is not set
CONFIG_NSH_DISABLE_LOSETUP=y
# CONFIG_NSH_DISABLE_LS is not set
# CONFIG_NSH_DISABLE_MB is not set
# CONFIG_NSH_DISABLE_MKDIR is not set
# CONFIG_NSH_DISABLE_MKFATFS is not set
# CONFIG_NSH_DISABLE_MKFIFO is not set
# CONFIG_NSH_DISABLE_MKRD is not set
# CONFIG_NSH_DISABLE_MH is not set
# CONFIG_NSH_DISABLE_MOUNT is not set
# CONFIG_NSH_DISABLE_MW is not set
# CONFIG_NSH_DISABLE_NSFMOUNT is not set
# CONFIG_NSH_DISABLE_PS is not set
# CONFIG_NSH_DISABLE_PING is not set
# CONFIG_NSH_DISABLE_PUT is not set
# CONFIG_NSH_DISABLE_PWD is not set
# CONFIG_NSH_DISABLE_RM is not set
# CONFIG_NSH_DISABLE_RMDIR is not set
# CONFIG_NSH_DISABLE_SET is not set
# CONFIG_NSH_DISABLE_SH is not set
# CONFIG_NSH_DISABLE_SLEEP is not set
# CONFIG_NSH_DISABLE_TEST is not set
# CONFIG_NSH_DISABLE_UMOUNT is not set
# CONFIG_NSH_DISABLE_UNSET is not set
# CONFIG_NSH_DISABLE_USLEEP is not set
# CONFIG_NSH_DISABLE_WGET is not set
# CONFIG_NSH_DISABLE_XD is not set

#
# Configure Command Options
#
# CONFIG_NSH_CMDOPT_DF_H is not set
CONFIG_NSH_CODECS_BUFSIZE=128
CONFIG_NSH_FILEIOSIZE=1024
CONFIG_NSH_LINELEN=80
CONFIG_NSH_NESTDEPTH=3
# CONFIG_NSH_DISABLESCRIPT is not set
CONFIG_NSH_DISABLEBG=y
CONFIG_NSH_CONSOLE=y

#
# USB Trace Support
#
# CONFIG_NSH_CONDEV is not set
CONFIG_NSH_ARCHINIT=y

#
# NxWidgets/NxWM
#

#
# System NSH Add-Ons
#

#
# Custom Free Memory Command
#
# CONFIG_SYSTEM_FREE is not set

#
# I2C tool
#

#
# FLASH Program Installation
#
# CONFIG_SYSTEM_INSTALL is not set

#
# FLASH Erase-all Command
#

#
# readline()
#
CONFIG_SYSTEM_READLINE=y
CONFIG_READLINE_ECHO=y

#
# Power Off
#
# CONFIG_SYSTEM_POWEROFF is not set

#
# RAMTRON
#
# CONFIG_SYSTEM_RAMTRON is not set

#
# SD Card
#
# CONFIG_SYSTEM_SDCARD is not set

#
# Sysinfo
#
# CONFIG_SYSTEM_SYSINFO is not set

#
# USB Monitor
#
