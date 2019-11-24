all: Plane.o Assignment4.o
	gcc -o planes Plane.o Assignment4.o

Assignment4.o : Plane.c Plane.h 
	gcc -c -Wall -Wextra -std=c11  Assignment4.c Plane.c 

Plane.o: Plane.c Plane.h
	gcc -c -Wall -Wextra -std=c11 Plane.c
 
run:
	planes

clean:
	rm -f planes *.o