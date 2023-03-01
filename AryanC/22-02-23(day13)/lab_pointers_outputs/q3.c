#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("%d\t%d\t%d\t%d\t",a,*p,**q,***r);
}