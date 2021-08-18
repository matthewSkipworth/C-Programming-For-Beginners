PROG = rectangle

$(PROG):$(OBJ)
	gcc $(OBJ) -o $(PROG)

$(OBJ):$(SRC)
	gcc -c $(SRC) -o $(OBJ)

SRC = main.c src/rect_utils.c

OBJ = main.o rect_utils.o

clean:
	rm rectangle $(OBJ)


