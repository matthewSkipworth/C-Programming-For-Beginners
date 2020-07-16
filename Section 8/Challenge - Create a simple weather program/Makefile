objects = build/main.o build/rain_util.o

$(shell mkdir build)

rain: $(objects)
	gcc $(objects) -o rain

build/main.o: main.c
	gcc -c main.c -o build/main.o

build/rain_util.o: src/rain_util.c
	gcc -c src/rain_util.c -o build/rain_util.o


clean: 
	-rm rain 
	-rm $(objects)
	-rm -r build


