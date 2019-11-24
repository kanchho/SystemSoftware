/*
 ============================================================================
 Name        : Conversion.h
 Author      : Bibek Koirala
 Description : Declaring functions used in Conversion.h
 ============================================================================
 */

#ifndef CONVERSION_H
#define CONVERSION_H



void binFunction(char* ptrToArr);
long convertBinaryToDecimal(long bin);
int* convertBinaryToHexa(long dec);
void printFunc(long bin, long dec, int* hex);

#endif
