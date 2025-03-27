#@ : Joseph Nader
#cpu=cortex-3

CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 
TYPE_AND_C89 =-mthumb -std=c89
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
PROJECT_NAME=cortex_lab

all : $(PROJECT_NAME).bin
	@echo "************BUILD IS DONE************ "

#startup.o :startup.s
#	$(CC)as.exe $(CFLAGS) -gdwarf-2 $< -o $@

%.o : %.c
	$(CC)gcc.exe -c -g $(CFLAGS) -gdwarf-2 $(INCS) $(TYPE_AND_C89) $< -o $@

$(PROJECT_NAME).elf :  $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ)  -o $@ -Map=file.map

$(PROJECT_NAME).bin: $(PROJECT_NAME).elf 
	$(CC)objcopy.exe -O binary $<  $@ 

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin