/*
 ============================================================================
 Name        : EX_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("Enter Rows & Column of Matrix : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d" ,&a,&b);
	int x[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Enter x%d%d =", i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf( "%d" , &x[i][j]);
		}
	}
	printf("Entered Matrix: \n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	int Tx[b][a];

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			Tx[j][i]=x[i][j];
		}
	}
	printf("Transpose Matrix: \n");
	for(int i=0;i<b;i++){
		for(int j=0;j<a;j++){
			printf("%d ", Tx[i][j]);
		}
		printf("\n");
	}
	return 0;
}
