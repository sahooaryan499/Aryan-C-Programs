#include<stdio.h>
int main(){
    int a=10,b=30,*p,*q;
    p=&a;
    printf("%d\n",p);
    q=&b;
    *q=*p;
    printf("%d\t%d\t%d\t%d\t",a,*p,*q,*(&b));
}