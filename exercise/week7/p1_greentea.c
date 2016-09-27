/*
Author: Pakkpon Phongthawee
LANG: C
Problem: GreenTree
*/
#include<stdio.h>
int main(){
    int i,water,sugar,pSugar,pWater,pProduct;
    for(i=0;i<7;i++){
        scanf("%d %d",&water,&sugar);
        pSugar = sugar/15;
        pWater = water/250;
        if(pWater>pSugar){
            pProduct = pSugar;
        }else{
            pProduct = pWater;
        }
        if(water-(pProduct*250) > 0){
            printf("%d water\n",pProduct);
        }else{
            printf("%d\n",pProduct);
        }
    }
    return 0;
}
