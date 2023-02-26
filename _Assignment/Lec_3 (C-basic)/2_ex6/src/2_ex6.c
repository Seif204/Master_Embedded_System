/*
 ============================================================================
 Name        : 2_ex6.c
 Author      : Seif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, sum=0;
	printf("Enter Integer Number :");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	for(int i=1 ;i <= a ;i++)
	{
		sum += i ;
	}

	printf("sum = %d" ,sum);
	return 0;
}
