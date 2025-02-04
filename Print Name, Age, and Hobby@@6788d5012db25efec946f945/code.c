#include <stdio.h>
int main() {
    char string[100];
    int b;
    char doing[100];
    printf("Name: ");
    scanf("%s",&string);
    printf("%s",string);
    printf("Age: \n");
    scanf("%d",&b);
    printf("%d",b);
    printf("Hobby \n");
    scanf("%s",&doing);
    printf("%s",doing);
    return 0;
}