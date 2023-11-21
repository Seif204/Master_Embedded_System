#include <stdio.h>
#include <math.h>
void SquareRoot(int num) {
    if (num < 0) {
        printf("Please Enter A Positive Num\n");
        return;
    }
   else{
    double res = sqrt((double)num);
    printf("The square root of %d is:%.3lf", num, res);
   }
}
int main() {
  int x  , test=1;
   while(test){
    printf("Enter an integer number: ");
    scanf("%d", &x);
    SquareRoot(x);
    if (x >= 0) {
    test = 0;
        }
   }
    return 0;
}
