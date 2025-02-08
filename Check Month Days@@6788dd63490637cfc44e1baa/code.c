#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=12){
        printf("%d");
    }
    else{
        printf("Invalid");
    }
}