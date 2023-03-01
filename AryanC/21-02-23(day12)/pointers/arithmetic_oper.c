//Arithmetic operations using Call by reference
#include<stdio.h>
int add(int *,int *);
int sub(int *,int *);
int mul(int *,int *);
int div(int *,int *);
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Addition is:%d\n",add(&a,&b));
    printf("Subtraction is:%d\n",sub(&a,&b));
    printf("Multiplication is:%d\n",mul(&a,&b));
    printf("Division is:%d\n",div(&a,&b));
   
}
int add(int *y,int *z){
    return *y+*z;
}
int sub(int *y,int *z){
    return *y-*z;
}
int mul(int *y,int *z){
    return *y**z;
}
int div(int *y,int *z){
    return *y/(*z);
}