# _*_Makefile_*_

CFLAG = -Wall -g
CC = gcc

test:	test.o	mytoc.o
	cc	-o	test	test.o	mytoc.o
test.o: test.c mytoc.h
	cc -c test.c
mytoc.o: mytoc.c
	cc -c mytoc.c

make demo:
	./test

clean:
	rm -f *.o *.s test
