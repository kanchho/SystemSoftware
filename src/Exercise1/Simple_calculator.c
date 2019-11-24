/*
File:		simple_calculator.c
Author:		Bibek Koirala
Description:	Doing basic calculations
*/


#include <stdio.h>
#include <math.h>



int main(){
   int firstNumber = 3;
   int secondNumber = 2;

   int sum = 0;
   int difference = 0;
   int product = 0;
   int division = 0;
   int power = 0;

   sum        = firstNumber + secondNumber;
   difference = firstNumber - secondNumber;
   product    = firstNumber * secondNumber;
   division   = firstNumber / secondNumber;
   power      = pow(firstNumber,secondNumber);

   printf("First number:\t %d\n", firstNumber);
   printf("Second number:\t %d\n", secondNumber);
   printf("Sum:\t\t %d\n", sum);
   printf("Difference:\t %d\n", difference);
   printf("Product:\t %d\n", product);
   printf("Division:\t %d\n", division);
   printf("Power: \t\t %d\n", power);

   return 0;

}
