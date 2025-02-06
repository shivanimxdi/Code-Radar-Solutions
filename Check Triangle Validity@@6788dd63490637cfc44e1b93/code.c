#include <stdio.h>
int main(){
    int b,p,h;
    scanf("%d",&b);
    scanf("%d",&p);
    scanf("%d",&h);
    if(h*h==p*p+b*b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}