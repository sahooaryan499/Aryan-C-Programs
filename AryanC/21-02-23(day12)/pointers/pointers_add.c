#include<stdio.h>
int add(int *,int *);
int main(){
    int a,b;
    //int *p=&a,*q=&b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Addition is:%d",add(&a,&b));
   
}
int add(int *y,int *z){
    return *y+*z;
}