#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	 char c[100];
	 printf("Enter String :");
	 fflush(stdin); fflush(stdout);
	 gets(c);
	 printf(" Reverse String :");
	 for(int i= strlen(c)-1 ; i>=0 ;i--){
       printf( "%c" , c[i]);
	 }
	return 0;
}
