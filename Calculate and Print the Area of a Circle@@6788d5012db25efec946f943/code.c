#include <stdio.h>
#include <math.h>
int main() {
    double radius;
    double Area;
    printf("Area: ");
    scanf("%lf",&radius);
    Area=(M_PI*radius*radius);
    printf("%.2lf",Area);
    return 0;
}