/*
 ============================================================================
 Name        : EX_1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
   int a;
   float sum=0;
   printf("Enter Num Of Data :");
   fflush(stdin);fflush(stdout);
   scanf("%d" ,&a);
   float y[a];
   for (int i=0;i<a;i++){
	   printf("%d . Enter Num :", i+1);
	   fflush(stdin);fflush(stdout);
	   scanf("%f" ,&y[i]);
	   sum += y[i];
   }
   printf("Average = %.1f ", sum/a);
	return 0;
}
