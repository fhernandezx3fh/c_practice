# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CC = gcc
CFLAGS = -Wall -g
TARGET = ex8

all:	clean $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(CFLAGS) -o $(TARGET).exe $(TARGET).c

clean:
	$(RM) $(TARGET).exe