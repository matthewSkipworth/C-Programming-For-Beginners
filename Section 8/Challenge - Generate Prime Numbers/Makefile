primes : main.o prime_util.o
	gcc main.o prime_util.o -o primes

main.o : main.c
	gcc -c main.c

prime_util.o : src/prime_util.c
	gcc -c src/prime_util.c