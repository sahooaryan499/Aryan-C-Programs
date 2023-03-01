//Function pointer arithmetic operations
#include<stdio.h>
int (*func)(int ,int );
int add(int ,int );
int sub(int ,int );
int mul(int ,int );
int div(int ,int );
int main(){
    int a,b,res1,res2,res3,res4;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    func=&add;
    res1=(*func)(a,b);
    func=&sub;
    res2=(*func)(a,b);
    func=&mul;
    res3=(*func)(a,b);
    func=&div;
    res4=(*func)(a,b);
    printf("Addition:%d\n",res1);
    printf("Subtraction:%d\n",res2);
    printf("Multiplication:%d\n",res3);
    printf("Division:%d\n",res4);
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