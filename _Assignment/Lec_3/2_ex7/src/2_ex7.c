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
	int a, factorial=1;
	printf("Enter Integer Number :");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	if(a>=0){	for(int i=1 ;i <= a ;i++)
	{
		factorial *= i ;
	}
    printf("factorial = %d" ,factorial);
	}
	else printf("Error !!");
	return 0;
}
