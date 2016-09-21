/*
LANG: C
Author: Pakkapon Phongthawee
Copyright all resereved (2016)
*/
#include<stdio.h>
int main(){
    int odd = 0,even = 0,x,i;
    for(i=0;i<8;i++){
        scanf("%d",&x);
        odd += (x%2)?x:0;
        even += (!(x%2))?x:0;
    }
    printf("%s\n%d\n%d",(odd==even)?"equal":(odd>even)?"odd":"even",even,odd);
    return 0;
}
