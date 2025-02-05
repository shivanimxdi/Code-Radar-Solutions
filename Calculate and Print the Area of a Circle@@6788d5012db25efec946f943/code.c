#include <stdio.h>

int main() {
    double radius;
    double Area;
    printf("Area: ");
    scanf("%lf",&radius);
    Area=(M_PI*radius*radius);
    printf("%lf",Area);
    return 0;
}