#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    sum=0;
    for(int i=1;i<=N;i=i+1){
        sum=sum+i;
        printf("%d",sum);
    }
}