#include<stdio.h>
#include<float.h>
int boy,girl,Aboy,Agirl,Bboy,Bgirl;
int main(){
    int i,n;
    char gender;
    double in,max=DBL_MIN,min=DBL_MAX;
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
        if(in < min){
            min = in;
        }
        if(in > max){
            max = in;
        }
    }
    if(Bgirl < Bboy){
        printf("men\n");
    }else if(Bgirl > Bboy){
        printf("women\n");
    }else{
        printf("equal\n");
    }
    printf("%.2f\n%.2f",max,min);
    return 0;
}
