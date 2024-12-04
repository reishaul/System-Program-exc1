CC = gcc
CFLAGS = -Wall 
STATIC_LIB_DIR = ../part_3
DYNAMIC_LIB_DIR = ../part_4
all: main
main: main.o
	$(CC) $(CFLAGS) -o main main.o -L$(STATIC_LIB_DIR) -l:mathlib.a -L$(DYNAMIC_LIB_DIR) -l:advmath.so -Wl,-rpath,$(DYNAMIC_LIB_DIR)

main.o: main.c advmath.h mathlib.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f main main.o