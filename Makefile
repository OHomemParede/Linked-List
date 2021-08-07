CC=gcc
DIR_SCR=./scr/
DIR_OBJ=./obj/


List_Core.o: $(DIR_SCR)List_Core.c
	$(CC) -c $^ -o $(DIR_OBJ)$@


list_test.o: $(DIR_SCR)list_test.c
	$(CC) -c $^ -o $(DIR_OBJ)$@


test: List_Core.o list_test.o
	$(CC) $(DIR_OBJ)List_Core.o  $(DIR_OBJ)list_test.o -o ./bin/$@
	.\bin\test.exe


clean:
	del .\obj\*.o
	