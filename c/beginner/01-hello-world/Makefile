# Compiler and flags
CC = clang
CFLAGS = -Wall -Wextra -O2

# Project files
SOURCES = hello.c calculator.c user_input.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = my_program

# Default target (build the program)
all: $(TARGET)

# Rule to build the final program
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Rule to build object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target (removes binary + object files)
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS)

