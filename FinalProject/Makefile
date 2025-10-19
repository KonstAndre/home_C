all: prog

prog: main.o temp_api.o
	gcc -o prog temp_api.o main.o

main.o: main.c
	gcc -c -o main.o main.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	-del -fR *.o prog