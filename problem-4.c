#include<stdio.h>
int main(){
    //problem-4

    int calcNum;
    scanf("%d",&calcNum);

    if(calcNum>0){
        printf("Number is Positive");
    }
    else if(calcNum<0){
        printf("Number is Negative");
    }
    else{
        printf("Number is ZERO");
    }



    return 0;
}