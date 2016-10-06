/*
Author: Pakkpon Phongthawee
LANG: C
Problem: MiniLeagueSoccer
WTF is this i don't get about soccer
*/
#include<stdio.h>
int score[4],fail[4],goal[4];
int main(){
    int i,a,b,c,d;
    for(i=0;i<6;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        goal[a]+=c;
        fail[a]+=d;
        goal[b]+=d;
        fail[b]+=c;
        if(c>d){
            score[a]+=3;
        }else if(c<d){
            score[b]+=3;
        }else{
            score[a]++;
            score[b]++;
        }
    }
    printf("%d %d %d\n%d %d %d\n%d %d %d\n",score[1],goal[1],fail[1],score[2],goal[2],fail[2],score[3],goal[3],fail[3]);
    return 0;
}
