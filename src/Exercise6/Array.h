/*
 ============================================================================
 Name        : Array.h
 Author      : Bibek Koirala
 Description : Declaring the function Array.c and its parameters.
 ============================================================================
 */

#ifndef ARRAY_H
#define ARRAY_H

long* createArray(int size);
long* primeFactorFinder(int size, long* ptrRandNums);
void printLargestPrimeFactors(int size, long* ptrRandNumsArray, long* ptrLargestPrimeFactors);

#endif
