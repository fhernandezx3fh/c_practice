#Makefile for creating object files

CC = gcc
CFLAGS = -g -Wall
TARGET = assn1

$(TARGET): $(TARGET).c
	gcc -g -O0 -Wall $(TARGET).c -o $(TARGET).o

clean:
	$(RM) $(TARGET).o
