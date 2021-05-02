# cpp-template/Makefile
# All source files should have compilation rules.
# All intermediary builds should be directed to the build directory.
# The final resulting executable should reside in the root directory.

all: main

# Produce the final executable
# Include all required object files
main: build/main.o #other object files e.g. build/other.o
	 gcc -o main build/main.o #other object files e.g. build/other.o

# Build an object file for main
build/main.o: src/main.c
	 gcc -o build/main.o -c src/main.c

# Add object file compilation rules here

# add all build files including ./main to the clean command
clean:
	 rm main build/main.o #other object files e.g. build/other.o
