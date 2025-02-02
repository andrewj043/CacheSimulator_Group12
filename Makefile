CC = gcc
CFLAGS = -o

TARGET = main

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(TARGET).c $(CFLAGS) $(TARGET) && ./main

clean:
	rm -f $(TARGET) *.o