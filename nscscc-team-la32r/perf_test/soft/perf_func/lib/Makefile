CFLAGS := -D_KERNEL -DCONFIG_PAGE_SIZE_16KB -fno-builtin -DCACHELOCK_MEM
CFLAGS += -DCPU_COUNT_PER_US=100 -I ../include -include ../include/common.h -DAPB_CLK=33333333
CFLAGS += -DLS1FSOC  -DCPU_MULT=6 -DDDR_MULT=6 -msoft-float
CFLAGS += $(MEM_DEF)

.SUFFIXES: .o64 .elf64 .bin64

objs= malloc.o stdio.o printf.o putchar.o puts.o printhex.o  printbase.o memcmp.o strcat.o strchr.o strcmp.o strtok.o strspn.o strcspn.o getchar.o strtoupp.o toupper.o string.o strcpy.o strichr.o strncmp.o strncpy.o strtoul.o time.o sscanf.o

objs64=$(objs:.o=.o64)

libtinyc.a: $(objs)
	$(CROSS_COMPILE)ar -cr  $@ $^

libtinyc64.a: $(objs64)
	$(CROSS_COMPILE)ar -cr  $@ $^

clean:
	rm -f *.o *.a *.s *.o64 *.bin64 *.elf64

-include rules.make
