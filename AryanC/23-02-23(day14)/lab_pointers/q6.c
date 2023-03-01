//Swap 3 numbers
#include<stdio.h>
int main(){
    int temp,a=10,b=20,c=30,*p,*q,*r;
    *p=a;
    *q=b;
    *r=c;
    
    temp=*q;
    *q=*p;
    *p=*r;
    *r=temp;
    
    printf("a:%d b:%d c:%d",a,b,c);
}
