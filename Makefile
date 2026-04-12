# DO NOT TOUCH THIS FILE! This is a generated Makefile for the gradebook project. If you need to make changes, please edit the source files and regenerate the Makefile.
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror

SRC = src/main.c src/student.c src/gradebook.c src/storage.c src/sort.c src/course.c src/system.c
OUT = gradebook

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)