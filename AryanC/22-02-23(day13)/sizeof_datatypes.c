#include<stdio.h>
int main(){
    void *p;
    int a=10;
    float f=1.2;
    long int b=19978;
    char ch='a';

    p=&a;
    printf("Integer:%lu\n",sizeof(p));
    p=&f;
    printf("Float:%lu\n",sizeof(p));
    p=&ch;
    printf("Char:%lu\n",sizeof(p));
    p=&b;
    printf("double:%lu\n",sizeof(p));

}