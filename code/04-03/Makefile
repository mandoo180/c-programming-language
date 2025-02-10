# Compiler
CC = gcc

# Compiler flags
CFLAGS = -g -Wall -Werror -I./src

# Source files
SRCS = src/main.c src/getop.c src/getch.c src/stack.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = app

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) -o $@ $^

# Compile source files to objects files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJS) $(TARGET)
