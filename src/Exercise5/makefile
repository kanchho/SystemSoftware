all: Conversion.o Assignment5.o
	gcc -lm -o hexdec Conversion.o Assignment5.o

Assignment5.o : Conversion.c Conversion.h 
	gcc -c -Wall -Wextra -std=c11  Assignment5.c Conversion.c 

Conversion.o: Conversion.c Conversion.h
	gcc -c -Wall -Wextra -std=c11 -lm Conversion.c 
 
run:
	hexdec

clean:
	rm -f hexdec *.o
