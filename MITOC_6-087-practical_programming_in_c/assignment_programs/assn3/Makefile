#Makefile for creating object files

CC = gcc
CFLAGS = -g -Wall -O0
TARGETS = assn3.p3.3 prob1 assn3.p3.4 assn3.p3.5

all:
	for i in $(TARGETS); do \
		  $(CC) $(CFLAGS) $$i.c -o $$i.o; \
	done

clean:
	for i in $(TARGETS); do \
		$(RM) $$i.o; \
	done
