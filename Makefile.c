

# This is a top-level "kludge" Makefile that just includes the correct
# Makefile.  If you already know the Makefile that you want, you can skip
# this nonsense using:
#
#   make -f Makefile.unix, OR
#   make -f Makefile.win
#


-include .config //����.config
ifeq ($(CONFIG_WINDOWS_NATIVE),y)
include Makefile.win
else
include Makefile.unix //����Makefile.unix
endif
