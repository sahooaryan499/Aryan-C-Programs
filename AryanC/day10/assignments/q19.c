#include<stdio.h>
int main(){
    int a=10,b=5;
    int res=a>b || a++;
    printf("%d\n",res);
    printf("%d",a);
}