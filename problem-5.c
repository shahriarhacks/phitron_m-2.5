#include<stdio.h>

int main(){

 //problem-5

    int hisMoney;

    scanf("%d",&hisMoney);

    if(hisMoney>=10000){
        printf("Gucci Bag\n");
        if(hisMoney>20000){
            printf("Gucci Belt\n");
        }
    }
    else if (hisMoney>=5000){
        printf("Levis Bag\n");
    }
    else{
        printf("Buy Something\n");
    }
    

    return 0;
}