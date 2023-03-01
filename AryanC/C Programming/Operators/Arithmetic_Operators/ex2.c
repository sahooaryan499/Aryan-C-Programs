/*Swapping of 2 variables without using third variable*/
#include<stdio.h>
int main(){
    int x=5,y=10;
    x=x-y;
    y=x+y;
    x=y-x;
    printf("x:%d y:%d\n",x,y);
    return 0;
}