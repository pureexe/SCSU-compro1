/*
Author: Pakkpon Phongthawee
LANG: C
Problem: RetrieveFromSubject
*/
#include<stdio.h>
#include<string.h>
char code[20000][6],firstname[20000][31],lastname[20000][51];
double gpa[20000];
int main(){
    int i,n,meet = 0;
    char target[6];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s %s %lf",code[i],firstname[i],lastname[i],&gpa[i]);
    }
    scanf("%s",target);
    for(i=0;i<n;i++){
        if(strcmp(code[i],target)==0){
            printf("%s %s %.1f\n",firstname[i],lastname[i],gpa[i]);
          meet=1;
        }
    }
    if(meet == 0){
        printf("None");
    }
    return 0;
}
