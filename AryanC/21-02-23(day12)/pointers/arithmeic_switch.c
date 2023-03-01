//Function pointer arithmetic operations using switch case
#include<stdio.h>
int (*func)(int , int );
int add(int ,int );
int sub(int ,int );
int mul(int ,int );
int div(int ,int );
int main(){
    int a,b,res1,res2,res3,res4;
    char oper;
    printf("Enter an operator to perform an operation(+,-,*,/):");
    scanf("%c",&oper);//This has to be place before taking a and b as inputs
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    switch(oper)
    {
        case '+':
        func=&add;
        res1=(*func)(a,b);
        printf("The sum is:%d",res1);
        break;
        
        case '-':
        func=&sub;
        res2=(*func)(a,b);
        printf("The difference is:%d",res2);
        break;

        case '*':
        func=&mul;
        res3=(*func)(a,b);
        printf("The multiplication is:%d",res3);
        break;

        case '/':
        func=&div;
        res4=(*func)(a,b);
        printf("The division is:%d",res4);
        break;

        default:
            printf("Wrong operator chosen.");
    }
}
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}