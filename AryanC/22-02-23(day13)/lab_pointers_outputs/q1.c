#include<stdio.h>
int main(){
    int a=10,b=20,*p,*q;
    p=&a;
    q=p;
    printf("%d\t%d\t%d\t%d\t",a,*p,*q,*(&b));
}