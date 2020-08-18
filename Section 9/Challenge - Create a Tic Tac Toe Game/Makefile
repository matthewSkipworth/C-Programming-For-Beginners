$(shell mkdir build)

tictactoe : build/main.o build/gameBoard.o build/boardStatus.o
	gcc build/main.o build/gameBoard.o build/boardStatus.o -o tictactoe

build/main.o : main.c
	gcc -c main.c -o build/main.o

build/gameBoard.o : src/gameBoard.c
	gcc -c src/gameBoard.c -o build/gameBoard.o

build/boardStatus.o : src/boardStatus.c
	gcc -c src/boardStatus.c -o build/boardStatus.o

clean : 
	rm -r build