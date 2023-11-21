#include <stdio.h>
int OnesInBinary(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }
    return count;
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int onesCount = OnesInBinary(num);
    printf("Number of ones in the binary = %d\n", onesCount);

    return 0;
}
