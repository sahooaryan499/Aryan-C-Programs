//Relation between arrays and pointers
#include<stdio.h>
int main(){
    int a[10]={11,22,33,44,55,66,77,88,99,110};
    int *p=&a;
    for(int i=0;i<10;i++){
        printf("Value of a:%d\t%d\n",a[i],&a[i]);
    }
    for(int i=0;i<=9;i++){
        printf("%d\t%d\n",*(p+i),p+i);
    }
}