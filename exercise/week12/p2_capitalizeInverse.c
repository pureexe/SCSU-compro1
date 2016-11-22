#include<stdio.h>
#include<ctype.h>
char* capitalizeInverse(char* input){
    int i = 0;
    while(input[i]!='\0'){
        if(islower(input[i])){
            input[i]=toupper(input[i]);
        }else if(isupper(input[i])){
            input[i]=tolower(input[i]);
        }
        i++;
    }
    return input;
}
int main(){
    char input[1000];
    gets(input);
    printf("%s",capitalizeInverse(input));
    return 0;
}
