/*
 ============================================================================
 Name        : 2_ex8.c
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
   char x;
   printf("Enter Operator -,+,* or / :");
   fflush(stdin);fflush(stdout);
   scanf("%c",&x);
   printf("Enter Two Numbers : ");
   fflush(stdin);fflush(stdout);
   scanf("%f%f", &a,&b);
   switch(x){
   case '+' : printf("%.2f + %.2f = %.2f ", a,b,a+b); break;
   case '-' : printf("%.2f - %.2f = %.2f ", a,b,a-b); break;
   case '/' : printf("%.2f / %.2f = %.2f ", a,b,a/b); break;
   case '*' : printf("%.2f * %.2f = %.2f ", a,b,a*b); break;
   }

   return 0;
}
