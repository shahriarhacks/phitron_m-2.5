#include<stdio.h>
int main(){

    // problem-3

    int num;

    scanf("%d",&num);
    if(num>0){
        if((num%2)==0){
        printf("Number is even");
        }
        else{
            printf("Number is odd");
        }

    }
    else{
        printf("The Number is negative");
    }



    return 0;
}