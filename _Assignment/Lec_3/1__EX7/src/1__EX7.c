/*
 ============================================================================
 Name        : 1__EX7.c
 Author      : Seif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b;
	printf ("Enter Value of a :");
	fflush(stdin); fflush(stdout);
	scanf ("%f",&a);
	printf ("Enter Value of b :");
	fflush(stdin); fflush(stdout);
	scanf ("%f",&b);

	a=a-b ;
	b=a+b ;
	a=b-a ;

	printf( "After Swapping, Value of a=%f \n " ,a);
	printf( "After Swapping, Value of b=%f \n " ,b);


	return 0;
}
