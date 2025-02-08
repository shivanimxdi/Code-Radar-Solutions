#include <stdio.h>
int main() {
    char grades;
    if(grades=='A'){
        printf("Excellent");
    }
    else if(grades=='B'){
        printf("Good");
    }
    else if(grades=='C'){
        printf("Average");
    }
    else if(grades=='D'){
        printf("Below Average");
    }
    else (grades=='F'){
        printf("Fail");
    }
    // else{
    //     printf("Invalid grade");
    // }
    return 0;
}