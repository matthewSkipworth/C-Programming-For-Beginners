convert_minutes : main.o conversion_util.o
	gcc -o convert_minutes main.o conversion_util.o

main.o : main.c
	gcc -c main.c

conversion_util.o : src/conversion_util.c
	gcc -c src/conversion_util.c