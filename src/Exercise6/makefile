all: Array.o Assignment1.o
	gcc -lm -o factors Array.o Assignment1.o

Assignment1.o : Array.c Array.h 
	gcc -c -Wall -Wextra -std=c11  Assignment1.c Array.c 

Array.o: Array.c Array.h
	gcc -c -Wall -Wextra -std=c11 -lm Array.c
 
run:
	factors

clean:
	rm -f factors *.o
