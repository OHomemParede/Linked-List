CC=gcc
FLAG=-g -Wall
DIR_SCR=./scr/
DIR_OBJ=./obj/
DEPENDECIES=List_Core.o List_Module_Control.o List_Module_Search.o


%.o: $(DIR_SCR)%.c
	$(CC) $(FLAG) -c $^ -o $(DIR_OBJ)$@


build: $(DEPENDECIES)


clean:
	del *.o || rm -f *.o
	del .\obj\*.o || rm -f ./obj/*.o
	