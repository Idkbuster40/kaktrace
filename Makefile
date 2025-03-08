CC = gcc # Compiler
MAKE = make
CFLAGS = -Wno-deprecated-declarations -Wall # Compile Flags
LDFLAGS = -lm # Linker FLags
NAME = kaktrace

OBJECTS = # Object files

all: $(NAME) clean # Build tasks

$(NAME): main.c $(OBJECTS) # Compile Executable
	 $(CC) -o $(NAME) -no-pie -$(CFLAGS) main.c $(OBJECTS) $(LDFLAGS) # Compile and link

.PHONY clean # Not real target
clean: $(OBJECTS) # Cleanup tasks
	rm $(OBJECTS) # Delete this stuff
