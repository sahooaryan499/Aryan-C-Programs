#include<stdio.h>
void array(int *,int );
int main(){
    int a[5]={55,66,77,88,99};
    int *p=&a;
    array(p,5);
}
void array(int *p,int size){
    for(int i=0;i<size;i++){
        printf("%d\n",p[i]);
    }
}
