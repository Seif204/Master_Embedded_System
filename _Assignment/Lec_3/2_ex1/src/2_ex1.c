/*
 ============================================================================
 Name        : 2_ex1.c
 Author      : Seif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	printf("Enter Your Integer Number To Check :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even",a);
	}
	else printf("%d is odd",a);

	return 0;
}
