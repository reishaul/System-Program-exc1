# Compiler and flags
CC = gcc
#print attention 
CFLAGS = -Wall 

# Targets
LIB_NAME = mathlib.a
#mid file from the c file
OBJECTS = mathlib.o
MAIN = part3
#the binary file we get after compilation 
EXECUTABLE = part3

# Default target to compare
all: $(LIB_NAME) $(EXECUTABLE)

# Compile the library
$(LIB_NAME): $(OBJECTS)
	ar rcs $@ $^

# Compile the mathlib.c to mathlib.mathlib.o: mathlib.c mathlib.h
mathlib.o: mathlib.c mathlib.h
	$(CC) $(CFLAGS) -c $< -o $@


# Compile the main program
$(EXECUTABLE): main.c $(LIB_NAME)
	$(CC) $(CFLAGS) $< -L. -lmathlib -o $@

# Clean up build files
clean:
	rm -f $(OBJECTS) $(LIB_NAME) $(EXECUTABLE)

.PHONY: all clean
