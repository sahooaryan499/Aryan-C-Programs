#include<stdio.h>
int main(){
    int a=1;
    float b=2.6;
    char ch='a';
    double d=2.43265545767;
    short int e=99;
    long int f=3444444444;
    unsigned int g=5; 

    printf("%zu\n",sizeof(a));
    printf("%zu\n",sizeof(b));
    printf("%zu\n",sizeof(ch));
    printf("%zu\n",sizeof(d));
    printf("%zu\n",sizeof(e));
    printf("%zu\n",sizeof(f));
    printf("%zu\n",sizeof(g));
}
