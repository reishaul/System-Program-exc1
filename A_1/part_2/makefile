

#call to compailer
CC = gcc

#flags for the compilation
CFLAGS = -Wall -g -I$(INCDIR)

SRCDIR = src
INCDIR = Include

# name of the binary file which create
TARGET = part2


# source file
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJ = $(SRCS:$(SRCDIR)/%.c=$(SRCDIR)/%.o)


$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)


$(SRCDIR)%.o: $(SRCDIR)/%.c $(wildcard $(INCDIR)/%.h)
	$(CC) $(CFLAGS) -c $< -o $@

# clean the file that will create after
.PHONY: clean
clean:
	rm -f $(TARGET) $(SRCDIR)/*.o
