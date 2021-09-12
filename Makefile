CC=gcc
FLAG=-g -Wall
SRC_PATH=./src
OBJ_PATH=./obj
DEPENDECIES=core.o add_on.o sort.o


%.o: $(SRC_PATH)/%.c
	$(CC) $(FLAG) -c $^ -o $(OBJ_PATH)/$@


build: $(DEPENDECIES)


debug.exe: $(SRC_PATH)/Debug/list_tests.c
	$(CC) $(FLAG) $^ $(OBJ_PATH)/core.o $(OBJ_PATH)/add_on.o -o $@

clean:
	del *.o || rm -f *.o
	del .\obj\*.o || rm -f ./obj/*.o
	