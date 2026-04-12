CC = gcc

CFLAGS = -std=c11 -Wall -Wextra -Werror $(shell pkg-config --cflags gtk+-3.0)
LDFLAGS = $(shell pkg-config --libs gtk+-3.0)

SRC = src/main.c src/student.c src/gradebook.c src/storage.c src/sort.c src/course.c src/system.c

TARGET = gradebook

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)