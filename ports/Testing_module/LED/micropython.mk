USERMODULES_DIR := $(USERMOD_DIR)

#add all C files to SRC_USERMOD
SRC_USERMOD += $(USERMODULES_DIR)/TestMP.c

CFLAGS_USERMOD += -I$(USERMODULES_DIR)
