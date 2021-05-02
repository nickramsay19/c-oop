# cpp-template/Makefile
# All source files should have compilation rules.
# All intermediary builds should be directed to the build directory.
# The final resulting executable should reside in the root directory.

all: main

# Produce the final executable
# Include all required object files
main: build/main.o build/Point.o build/Point3D.o
	 gcc -o main build/main.o build/Point.o build/Point3D.o

# Build an object file for main
build/main.o: src/main.c
	 gcc -o build/main.o -c src/main.c

# Add object file compilation rules here
build/Point.o: src/Point.c
	gcc -o build/Point.o -c src/Point.c

build/Point3D.o: src/Point3D.c
	gcc -o build/Point3D.o -c src/Point3D.c

# add all build files including ./main to the clean command
clean:
	 rm main build/main.o build/Point.o build/Point3D.o
