#include<stdio.h>
int main(){
    int a[5]={1,3,5,-7,11};
    int *p=a;
    //printf("%d\n",p);
    p=p+4;
    printf("%u\t%u\t%u\t",a,a[4],*p);
}