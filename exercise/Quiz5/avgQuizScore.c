#include<stdio.h>
int main(){
    int test,user,i,j,temp,storage[1000]={0};
    scanf("%d %d",&test,&user);
    for(i=0;i<test;i++){
        for(j=0;j<user;j++){
            scanf("%d",&temp);
            storage[j]+=temp;
        }
    }
    for(i=0;i<user;i++){
        printf("%d ",storage[i]);
    }
    printf("\n");
    for(i=0;i<user;i++){
        printf("%.2f ",(double)storage[i]/test);
    }
    return 0;
}
