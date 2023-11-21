#include <stdio.h>
void PrimeNums(int x , int y) {
    int i;
    for (i=x ; i<=y ;i++){
        int test =1;
        int j;
            for (j=2 ; j*j<=i ;j++){
             if(i%j == 0){
                 test=0;
                 break;
             }
            }
     if(test == 1 && i>1 ){
     printf("%d \t" ,i); }
    }
}
int main() {
    int n1,n2;
    printf("Enter Two Num \n");
    scanf("%d %d",&n1,&n2);
    PrimeNums(n1,n2);
}


