CC=gcc
OUT=./bin/
SCR=./scr/

List.o: List.c
	$(CC) -c $(SCR)List.c -o $(OUT)List.o

clean:
	del .\bin\*.o
	