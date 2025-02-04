#include<stdio.h>
int main(){
    float number;
    printf("You entered: ");
    scanf("%f",&number);
    printf("%.2f\n", number);  // Correct format specifier
    return 0;
}