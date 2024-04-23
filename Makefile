CC=gcc -D_XOPEN_SOURCE_EXTENDED
CFLAGS=-c -std=c99 -Wall -Iinclude
SRC=$(CURDIR)/src
BUILD=$(CURDIR)/bin
INC=$(CURDIR)/include

dirs: 
	mkdir -p $(BUILD)
clog: $(SRC)/clog.c 
	$(CC) $(CFLAGS) -o $(BUILD)/clog.o $(SRC)/clog.c

all: dirs clog 
clean: 
	rm -f $(BUILD)/*
