$(shell mkdir build)

SRC = main.c src/functions.c
OBJ = build/main.o build/functions.o

functions : $(OBJ)
	gcc $(OBJ) -o functions

build/main.o : main.c
	gcc -c main.c -o build/main.o

build/functions.o : src/functions.c
	gcc -c src/functions.c -o build/functions.o


clean: 
	rm -r build