CC = gcc
CFLAGS = -Wall -lm
LDFLAGS =
OBJFILES = $(patsubst %.c,%.o,$(wildcard *.c))
TARGET = mat_main

.PHONY: all clean

all: $(TARGET)


$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f *.o *.out


print-%  : ; @echo $* = $($*)