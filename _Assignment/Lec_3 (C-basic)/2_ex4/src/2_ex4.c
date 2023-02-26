/*
 ============================================================================
 Name        : 2_ex4.c
 Author      : Seif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float a;
	printf("Enter Num : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	if( a>0 ) printf("%f is  Postive",a);
	else if( a<0 ) printf("%f is  Negative",a);
	else printf("You Entered Zero");

	return 0;
}
