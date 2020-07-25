weekly_pay : main.o weekly_pay_util.o
	gcc -o weekly_pay main.o weekly_pay_util.o

main.o : main.c
	gcc -c main.c

weekly_pay_util.o : src/weekly_pay_util.c
	gcc -c src/weekly_pay_util.c
