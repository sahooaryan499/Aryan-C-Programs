#include<stdio.h>
int pointer(int *,int *);
int main(){
    int a=6,b=6;
    int *p=&a;
    int *q=&b;
    printf("The sum is:%d",pointer(p,q));
}
int pointer(int *p,int *q){
    return *p+*q;
}