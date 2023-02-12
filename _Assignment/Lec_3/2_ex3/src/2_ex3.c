/*
 ============================================================================
 Name        : 2_ex3.c
 Author      : Seif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
 float a,b,c;
	printf("Enter Three Number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a,&b,&c);
	if (a>b && a>c) printf("Largest Num is : %.2f" , a);
	else if (b>a && b>c) printf("Largest Num is : %.2f" , b);
	else  printf("Largest Num is : %.2f" , c);



	return 0;
}
