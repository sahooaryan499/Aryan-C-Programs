#include<stdio.h>
int main(){
    int *p,*q,a=5,b=6;
    p=&a;
    q=&b;
    printf("Sum of entered numbers:%d",*p+*q);
}