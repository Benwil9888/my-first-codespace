CC = gcc
CFLAGS = -Wall
TARGET = 40.program

all: $(TARGET)

$(TARGET): 40.program.c
	$(CC) $(CFLAGS) -o $(TARGET) 40.program.c -lm

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
