#include<stdio.h>
int main(){
    int f,t1,c,l,m;
    printf("Enter a 3 digit number:");
    scanf("%d",&c);
    f=c/100;
    t1=c%100;
    l=t1%10;
    m=t1/10;
    printf("Sum is:%d",f+l+m);
}