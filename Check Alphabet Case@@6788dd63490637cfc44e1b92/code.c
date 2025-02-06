#include<stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(alpha>='A' && alpha<='Z'){
        printf("Upercase");}
    else if(alpha>='a' && alpha<='z'){
        printf("Lowercase");
    }
    else{
         printf("Not an alphabet.");
    }
}
