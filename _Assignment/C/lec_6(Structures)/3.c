#include <stdio.h>

struct Complex {
    float real;
    float imag;
} Complex;
struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}
int main() {
   struct Complex n1, n2, result;

    printf("For the 1st complex number:\n");
    printf("Enter real and imaginary parts respectively: ");
    scanf("%f%f", &n1.real, &n1.imag);

    printf("For the 2nd complex number:\n");
    printf("Enter real and imaginary parts respectively: ");
    scanf("%f%f", &n2.real, &n2.imag);
    result = add(n1, n2);
    printf("Sum: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}

