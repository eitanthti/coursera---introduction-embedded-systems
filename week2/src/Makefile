#******************************************************************************
#Eitan Halfon
#eitanthti.e.h@gmail.com
#*****************************************************************************
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#	<>.o - object file
#	<>.d - Dependency Files for each source file
#  	<>.asm - assembly file
#  	<>.i - preprocessed file
#  	Build - compile all object file and link to final executable
#  	Complie-all - complie all object files (do not link)
#  	Clean - remove all compiled file
#
# Platform Overrides:
#	Target Platform: MSP432 mcu and HOST
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = -DMSP432 or -DHOST

#Common Flags
FLAGS = -O0      \
		-Wall    \
		-g       \
		-std=c99 \
		-Werror

TARGET = c1m2

ifeq ($(PLATFORM),MSP432)
	# Architectures Specific Flags
	LINKER_FILE = -T msp432p401r.lds
	CPU = cortex-m4
	ARCH = armv7e-m
	SPECS = nosys.specs
	OTHER_SPECS = -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16  
	
	SOURCES = main.c \
		memory.c \
		interrupts_msp432p401r_gcc.c \
		startup_msp432p401r_gcc.c \
	  	system_msp432p401r.c
	# Compiler Flags and Defines
	CC = arm-none-eabi-gcc
	LINKER_PATH = -L ../
	CPPFLAGS = -DMSP432 $(INCLUDES)
	CFLAGS = $(FLAGS) $(OTHER_SPECS) -mcpu=$(CPU) -march=$(ARCH) --specs=$(SPECS)
	LDFLAGS = -wl, -MAP=$(TARGET).map, $(LINKER_PATH) $(LINKERFILE)
	SIZE = size
else
	CC = gcc
	CFLAGS = $(FLAGS)
	CPPFLAGS = -DHOST $(INCLUDES)
	LDFLAGS = -Wl,-Map=$(TARGET).map
	SIZE = size
endif

ASMS = $(SOURCES:.c=.asm)
PRES = $(SOURCES:.c=.i)
OBJS = $(SOURCES:.c=.o)
DEPS = $(SOURCES:.c=.d)

%.o : %.c
	$(CC) -c $< $(CPPFLAGS) $(CFLAGS) -o $@

%.asm : %.c
	$(CC) -S $< $(CPPFLAGS) $(CFLAGS) -o $@

%.i : %.c
	$(CC) -E $< $(CPPFLAGS) -o $@

%.d : %.c
	$(CC) -E -M $< $(CPPFLAGS) -o $@

.PHONY: compile-all
compile-all:$(OBJS)

.PHONY: build-all
build: $(DEPS)
build: $(TARGET).out

.PHONY: clean
clean:
	rm -f $(OBJS) $(DEPS) $(ASMS) $(PRES) $(TARGET).out $(TARGET).map

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
	$(SIZE) $@





