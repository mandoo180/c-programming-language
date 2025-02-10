CC = gcc
CFLAGS = -g -Wall -Werror -I./src
SRCS = src/main.c src/atof.c
OBJS = $(SRCS:.c=.o)
TARGET = app

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %c
	$(CC) $(CFLAGS) -c %< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
