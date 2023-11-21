#include <stdio.h>

int sum() {
    int n = 100;
    int sum = (n * (n + 1)) / 2;
    return sum;
}
int main() {
    int result = sum();
    printf("Sum of numbers from 1 to 100= %d", result);
    return 0;
}
