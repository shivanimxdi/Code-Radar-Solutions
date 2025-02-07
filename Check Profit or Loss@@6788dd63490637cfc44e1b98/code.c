#include <stdio.h>
int main(){
    int cp,sp;
    scanf("%d",&cp);
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}
