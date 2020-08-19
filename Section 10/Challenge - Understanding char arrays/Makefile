$(shell mkdir build)

strFunc: build/main.o build/myString.o
	gcc build/main.o build/myString.o -o strFunc

build/main.o: main.c
	gcc -c main.c -o build/main.o

build/myString.o: src/myString.c
	gcc -c src/myString.c -o build/myString.o

build/menu.o: src/menu.c
	gcc -c src/menu.c -o build/menu.o

clean:
	rm -r build