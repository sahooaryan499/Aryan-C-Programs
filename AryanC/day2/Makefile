app: app.c addition.o subtract.o arith.h
	gcc app.c addition.c subtract.c -o app

addition.o: addition.c
	gcc -c addition.c -o addition.o

subtract.o: subtract.c
	gcc -c subtract.c -o subtract.o

division.o: division.c
	gcc -c division.c -o division.o

multiplication.o: multiplication.c
	gcc -c multiplication.c -o multiplication.o

modulus.o: subtract.c
	gcc -c modulus.c -o modulus.o


clean:
	rm *.o
