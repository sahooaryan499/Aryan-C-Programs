#include<stdio.h>
int main(){
    int a=100;
    int *p=&a;
    //printf("%u\n",p);
    p=p+5;
    printf("%u\n%u",a,p);
}