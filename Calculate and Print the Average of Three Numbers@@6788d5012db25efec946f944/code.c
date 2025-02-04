#include <stdio.h>
int main() {
    int a,b,c;
    printf("Average: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%.2f",a+b+c/3);
    return 0;
}