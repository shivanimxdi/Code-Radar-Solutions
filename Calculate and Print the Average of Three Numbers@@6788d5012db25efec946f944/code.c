#include <stdio.h>
int main() {
    int a,b,c;
    double average;
    printf("Average: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    average=(a+b+c)/3.0;
    printf("%.2f",average);
    return 0;
}