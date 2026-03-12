CC = gcc
CFLAGS = -g -I./include/

all: test
test:
	$(CC) $(CFLAGS) main.c
	./a.out

.PHONY: all test
