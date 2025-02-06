#include <stdio.h>
int main(){
    char what;
    scanf("%c",&what);
    if(what=='a'|| what=='e'|| what=='i'|| what=='o'|| what=='u'||){
        prinf("Vowel");
    else if(what!='a'|| what!='e'||what!='i'||what!='o'||what!='u'||){
        prinf("Consonant");
    }
    else if(what>='0' && what<='9'){
        prinf("Digit");
    }
    else{
        prinf("Special Character");
    }
    }
}