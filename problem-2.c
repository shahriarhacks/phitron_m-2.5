#include<stdio.h>
int main(){
    // problem-2

    int num1,num2;

    scanf("%d %d",&num1,&num2);

    int sum= num1+num2;
    int sub= num1-num2;
    int mul=num1*num2;
    float div=num1*1.0/num2;
    int mod=num1%num2;

    printf("%d %d %d %0.2f %d",sum,sub,mul,div,mod);
    
    return 0;
}