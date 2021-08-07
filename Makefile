CC=gcc

List.o: ./scr/List.c
	$(CC) -c ./scr/List.c -o ./obj/List.o


list_test.o: ./scr/test/list_test.c
	$(CC) -c ./scr/test/list_test.c -o ./obj/list_test.o


test: List.o list_test.o
	$(CC) ./obj/list_test.o ./obj/List.o -o ./list_test.exe
	./list_test.exe


clean:
	del .\obj\*.o .\scr\test\*.exe .\scr\test\*.o 
	