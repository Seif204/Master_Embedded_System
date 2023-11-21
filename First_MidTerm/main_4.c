#include <stdio.h>
void Digits(int num) {
    while (num) {
        int res = num % 10;
        num /= 10;
        printf("%d", res);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Digits(num);

    return 0;
}
