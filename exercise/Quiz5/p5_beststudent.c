/*
Author: Pakkpon Phongthawee
LANG: C
Problem: best_student
*/
#include<stdio.h>
#include<stdlib.h>
struct student{
    char code[9],name[31],surname[51];
    double gpa;
}typedef student;
int main(){
    int i,n,at;
    float top = 0;
    scanf("%d",&n);
    student* people = (student*)malloc(sizeof(student)*n);
    for(i=0;i<n;i++){
        scanf("%s %s %s %lf",people[i].code,people[i].name,people[i].surname,&people[i].gpa);
    }
    for(i=0;i<n;i++){
        if(people[i].gpa>top){
            top = people[i].gpa;
            at = i;
        }
    }
    printf("%s %s %s %.2f",people[at].code,people[at].name,people[at].surname,people[at].gpa);
    return 0;
}
