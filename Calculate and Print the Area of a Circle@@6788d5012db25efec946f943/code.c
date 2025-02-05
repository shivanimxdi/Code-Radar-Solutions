#include <stdio.h>

int main() {
    double radius;
    double Area;
    printf("Area: ");
    scanf("%lf",&radius);
    Area=(M_PI*radius*radius);
    printf("%f",Area);
    return 0;
}