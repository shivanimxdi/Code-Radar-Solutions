#include <stdio.h>
int main() {
    char string[100];
    int b;
    char doing[100];
    printf("Name: ");
    scanf("%s",&string);
    printf("%s \n",string);
    printf("Age: ");
    scanf("%d",&b);
    printf("%d \n",b);
    printf("Hobby: ");
    scanf("%s",&doing);
    printf("%s",doing);
    return 0;
}