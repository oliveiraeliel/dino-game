## Makefile for compiling and running the program
#
#CC = g++
#CFLAGS = -Wall -Wextra
#LDFLAGS = -lSDL2
#
#TARGET = main
#SRC = main.cpp
#
#all: $(TARGET)
#
#$(TARGET): $(SRC)
#	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)
#
#run: $(TARGET)
#	./$(TARGET)
#
#clean:
#	rm -f $(TARGET)
#
#.PHONY: all run clean

CC = g++
CFLAGS = -Wall -Wextra
LDFLAGS = -lSDL2

.PHONY: all clean

all: main

main: entities/Entity.h entities/Entity.cpp main.cpp
	$(CC) $(CFLAGS) entities/Entity.cpp main.cpp -o main $(LDFLAGS)

clean:
	rm -f main
