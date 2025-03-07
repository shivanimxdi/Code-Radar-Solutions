#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter the value ");
    scanf("%d",&n);
    int fibo = fibonacci(n);
    printf("%d",fibo);
}