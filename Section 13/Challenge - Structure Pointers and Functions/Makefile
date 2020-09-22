$(shell mkdir build)

items: build/main.o build/item.o
	gcc -Wall -g3 build/main.o build/item.o -o items

build/main.o: main.c
	gcc -c main.c -o build/main.o

build/item.o: src/item.c
	gcc -c src/item.c -o build/item.o

clean: 
	rm -r build