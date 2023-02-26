/*
 ============================================================================
 Name        : 2_ex2.c
 Author      : Seif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
 char a;
 printf("Enter Character To Check :");
 fflush(stdin); fflush(stdout);
 scanf("%c",&a);
 if(a=='a'||a=='A'||a=='E'||a=='e'||a=='U'||a=='u'||a=='i'||a=='I'||a=='o'||a=='O')
 {
	 printf("%c is Vowel",a);
 }
 else printf("%c is Constant ", a);


	return 0;
}
