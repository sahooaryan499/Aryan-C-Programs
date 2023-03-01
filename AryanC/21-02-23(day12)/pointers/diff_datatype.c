#include<stdio.h>
/*int main(){
    int a=10;
    char ch='a';
    float f=1.2;
    int *p=&ch;
    float *q=&a;
    char *t=&f; 
    printf("%d\n",*p);
    printf("%f\n",*q);
    printf("%c\n",*t);
}*/
int main(){
    int a=10;
    float f=1.2;
    char ch='a';
    void *p;
    p=&a;
    printf("%d\n",*(int *)p);
    p=&f;
    printf("%f\n",*(float *)p);
    p=&ch;
    printf("%c\n",*(char *)p);
    
   
    
}