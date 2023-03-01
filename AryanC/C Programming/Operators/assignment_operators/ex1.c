#include<stdio.h>
int main(){
    int a,b=3,c=4;
    a=b+(c*=4);
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("c:%d\n",c);
}