#include<stdio.h>
int main(){
    int a=10;
    printf("value of a is %d\n",a++);
    printf("%d\n",sizeof(a++));
    printf("%d\n",a);
}