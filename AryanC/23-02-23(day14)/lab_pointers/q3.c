#include<stdio.h>
int main(){
    int *p,*q,a=10,b=20;
    p=&a;
    q=&b;
    if(*p>*q){
        printf("%d is greater",*p);
    }
    else{
        printf("%d is greater",*q);
    }
}