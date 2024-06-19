#include <stdio.h>
#define PI 3.14
#define AREA(radius) (PI * (radius) * (radius))

int main() {
    double radius;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    printf("Area of the circle: %.2lf :", AREA(radius));

    return 0;
}
