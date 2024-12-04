# Compiler and flags
CC = gcc
#print attention 
CFLAGS = -Wall -fPIC
LDFLAGS = -shared

# Targets
LIB_NAME = advmath.so

#mid file from the c file
OBJECTS = advmath.o

#the binary file we get after compilation 
EXECUTABLE = part4

# Default target to compare
all: $(LIB_NAME) $(EXECUTABLE)


$(LIB_NAME):$(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^ -lm


#Build advmath.o
advmath.o: advmath.c advmath.h
	$(CC) $(CFLAGS) -c $< -o $@

#Build the main program
$(EXECUTABLE): main.c $(LIB_NAME)
	$(CC)  $< ./$(LIB_NAME) -o $@



clean:
	rm -f $(OBJECTS) $(LIB_NAME) $(EXECUTABLE)

.PHONY: all clean


