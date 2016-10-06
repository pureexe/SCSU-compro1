#include<stdio.h>
int boy,girl,Aboy,Agirl,Bboy,Bgirl;
int main(){
    int i,n;
    char gender;
    double in;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf %c",&in,&gender);
        if(gender == 'w'){
            girl++;
            if(in <= 23.5 && in >= 18.5){
                Agirl++;
            }else{
                Bgirl++;
            }
        }else{
            boy++;
            if(in <= 23.5 && in >= 18.5){
                Aboy++;
            }else{
                Bboy++;
            }
        }
    }
    printf("%d %d\n%d %d\n%d %d",Aboy,Bboy,Agirl,Bgirl,boy,girl);
    return 0;
}
