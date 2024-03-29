#include <stdio.h>

struct Distance {
    int feet;
    float inch;
} ;

int main() {

struct Distance d1, d2, sum ;
    printf("Enter information for 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter information for 2nd distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // If inch is greater than 12, changing it to feet.
    if (sum.inch >= 12.0) {
        sum.inch -= 12.0;
        ++sum.feet;
    }

    printf("\nSum of distances: %d feet %.2f inches\n", sum.feet, sum.inch);

    return 0;
}
