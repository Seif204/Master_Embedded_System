#include <stdio.h>
int SumOfDigits(int num) {
    int sum = 0;
    while (num) {
        int res = num % 10;
        num /= 10;
        sum += res;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum =SumOfDigits(num);
    printf("Sum of Digits = %d\n", sum);

    return 0;
}
