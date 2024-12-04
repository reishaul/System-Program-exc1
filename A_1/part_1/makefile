# name of the binary file which create
TARGET = part1

#call to compailer
CC = gcc

#flags for the compilation
CFLAGS = -Wall -c

# source file
SRCS = main.c other.c
OBJS = $(SRC:*c =*.o)

#implicit rule
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(SRCS) -o $(TARGET) 

main.o:main.c
	$(CC) -c main.c

other.o:other.c other.h
	$(CC) -c other.c


# clean the file that will create after
clean:
	rm -f *.o $(TARGET)





