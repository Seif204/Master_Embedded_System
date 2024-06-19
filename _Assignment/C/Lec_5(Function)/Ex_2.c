
#include <stdio.h>

int factorial(int n);
int main() {

int a;
printf("Enter Integer Num : ");
fflush(stdin);fflush(stdout);
scanf("%d",&a);
printf("Factorial of %d = %d" , a, factorial(a));

    	return 0;
}

int factorial(int n){
   int vac=1;
for(int i=n; i>0 ;i--){
   vac = vac* i ;
}

return vac;
}



