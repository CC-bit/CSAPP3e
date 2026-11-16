CC = gcc
INPUT = act1.c act2.c act2.s
PROJECT = act1 act2
CFLAGS = --std=c99 -g -O3 -static -fno-inline-functions
CFLAGS1 = --std=c99 -g -Og -static -fno-stack-protector

all: $(PROJECT)

$(PROJECT) :  $(INPUT)
	$(CC) $(CFLAGS1) act1.c  -o act1
	$(CC) $(CFLAGS) act2.c act2.s -o act2
	# $(CC) $(CFLAGS) act3.c act3.s -o act3
	# $(CC) $(CFLAGS) act4.c -o act4

clean:
	rm -f $(PROJECT)
