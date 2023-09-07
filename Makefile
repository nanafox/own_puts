CC = gcc
CFLAGS= -Wall -Werror -Wextra -pedantic -std=gnu89

main: main.o echo.o echo_err.o
	$(CC) main.o echo.o echo_err.o -o main 
main.o: main.c
	$(CC) -c main.c $(CFLAGS)
echo.o: echo.c main.h
	$(CC) -c echo.c main.h $(CFLAGS)
echo_err.o: echo_err.c main.h
	$(CC) -c echo_err.c main.h $(CFLAGS)
clean:
	rm *.o *.gch main > /dev/null
