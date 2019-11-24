all: Tetranacci.o Prime.o Array.o Assignment1.o
	gcc -o tetraprime Tetranacci.o Prime.o Array.o Assignment1.o

Assignment1.o : Tetranacci.c Tetranacci.h Prime.c Prime.h Array.c Array.h
	gcc -c -Wall -Wextra -std=c11  Assignment1.c Tetranacci.c Prime.c Array.c

Tetranacci.o: Tetranacci.c Tetranacci.h
	gcc -c -Wall -Wextra -std=c11 Tetranacci.c

Prime.o: Prime.c Prime.h
	gcc -c -Wall -Wextra -std=c11 Prime.c

Array.o: Array.c Array.h
	gcc -c -Wall -Wextra -std=c11 Array.c


 
run:
	tetraprime

clean:
	rm -f tetraprime *.o