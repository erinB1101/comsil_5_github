SRCS:=$(shell echo *.c)
OBJ:=$(SRCS:%.c=%.o)
TARGET = animals

$(TARGET): $(OBJ)
	gcc $(OBJ) -o $(TARGET)

%.o:%.c Header.h
	gcc -c $< -o $@

.PHONY: clean
clean:
	rm $(OBJ) $(TARGET)

