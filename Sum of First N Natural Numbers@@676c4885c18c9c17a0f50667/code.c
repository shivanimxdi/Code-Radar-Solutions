#include <stdio.h>
int main(){
    int N;
    int sum=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i=i+1){
        sum=sum+i;
        printf("%d", sum);
    }
}