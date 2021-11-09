CC=clang
CFLAGS=-g -Wall -Werror -Wunused -pthread

lab4: lab4.o
	${CC} ${CFLAGS} -o $@ $^

clean:
	rm -f *.o lab4
