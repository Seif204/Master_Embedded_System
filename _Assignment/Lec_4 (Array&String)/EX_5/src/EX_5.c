/*
 ============================================================================
 Name        : EX_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,cunt=0;
	printf("Enter Num of Element : ");
	fflush(stdin); fflush(stdout);
	scanf ("%d", &a) ;
	int X[a] ;
	for(int i=0 ;i<a;i++) scanf("%d", &X[i]) ;
	printf("Enter The Element to be Searched : ") ;
	fflush(stdin); fflush(stdout) ;
	scanf ("%d", &b) ;
	for(int i=0 ;i<a;i++){
       cunt++;
       if(X[i]==b) break ;
     }
	printf("number founded at the location = %d " , cunt );



	return 0;
}
