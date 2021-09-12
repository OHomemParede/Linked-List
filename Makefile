CC=gcc
FLAG=-g -Wall
SRC_PATH=./scr/
OBJ_PATH=./obj/
DEPENDECIES=core.o add_on.o sort.o


%.o: $(SRC_PATH)%.c
	$(CC) $(FLAG) -c $^ -o $(OBJ_PATH)$@


build: $(DEPENDECIES)


clean:
	del *.o || rm -f *.o
	del .\obj\*.o || rm -f ./obj/*.o
	