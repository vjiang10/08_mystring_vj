all: main.o mystring.o 
	gcc -o mystring main.o mystring.o

main.o: mystring.h 
	gcc -c main.c

mystring.o: mystring.c mystring.h 
	gcc -c mystring.c 

clean:
	rm *.o

run: 
	./mystring