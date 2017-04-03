# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CC = gcc
CFLAGS = -Wall -g
TARGET = ex1

all:	$(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(CFLAGS) -o $(TARGET).exe $(TARGET).c

clean:
	$(RM) $(TARGET).exe