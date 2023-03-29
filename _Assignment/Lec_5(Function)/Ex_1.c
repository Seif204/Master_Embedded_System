
#include <stdio.h>

int prime_check (int num);

int main() {
    int a,b,ch;
    printf("Enter Two Numbers (Interval) :");
    fflush(stdin); fflush(stdout);
    scanf("%d%d",&a,&b);
    printf("Prime Numbers Between%d and%d Are :",a,b);
    for(int i=a+1 ; i<b ;i++){
    ch= prime_check (i);
    if(ch==0) printf("%d ",i);
    }
    	return 0;
}


 int prime_check (int num){
        int ch=0;
       for(int j=2 ; j<num ;j++){
        if( num%j==0 ){
            ch=1;
            break;
        }
             else ch=0;
       }
 return ch;
 }


