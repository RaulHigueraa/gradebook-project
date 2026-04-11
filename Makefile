CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror

SRC = src/main.c src/student.c src/gradebook.c src/storage.c src/sort.c
OUT = gradebook

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)