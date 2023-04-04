#include<stdio.h>

int main(){
    // Run every single problem if you run all at a time it will show you wrong answer or error
    //problem-1

    printf("Recently I heard that you've achieved 95%% marks in exam.\nThis is brilliant!\nI wish you'll shine your life!\tGood luck with all the barriers(/\\) in your life" );


    //problem-2

    int num1,num2;

    scanf("%d %d",&num1,&num2);

    int sum= num1+num2;
    int sub= num1-num2;
    int mul=num1*num2;
    float div=num1*1.0/num2;
    int mod=num1%num2;

    printf("%d %d %d %0.2f %d",sum,sub,mul,div,mod);

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