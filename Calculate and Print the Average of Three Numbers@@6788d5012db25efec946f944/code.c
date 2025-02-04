#include <stdio.h>
int main() {
    float a,b,c;
    printf("Average: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("%.2f",a+b+c/3);
    return 0;
}