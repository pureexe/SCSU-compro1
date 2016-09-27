/*
Author: Pakkpon Phongthawee
LANG: C
Problem:
*/
#include<stdio.h>
int main(){
    int reserved,people,i,cMale=0,cFemale=0,pMale,pFemale,gender;
    scanf("%d %d",&people,&reserved);
    for(i=0;i<people;i++){
        scanf("%d %d %d",&gender,&pMale,&pFemale);
        if(pMale>8 && pFemale>8){
            if(gender == 1 && cMale < reserved){
                printf("%d %d\n",i+1,1);
                cMale++;
            }else if(gender == 2 && cFemale < reserved){
                printf("%d %d\n",i+1,2);
                cFemale++;
            }else if(cMale < reserved){
                printf("%d %d\n",i+1,1);
                cMale++;
            }else if(cFemale < reserved){
                printf("%d %d\n",i+1,2);
                cFemale++;
            }
        }else if(pMale > 8 && cMale < reserved){
            printf("%d %d\n",i+1,1);
            cMale++;
        }else if(pFemale > 8 && cFemale < reserved){
            printf("%d %d\n",i+1,2);
            cFemale++;
        }
    }
    return 0;
}
