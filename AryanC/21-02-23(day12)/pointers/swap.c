//Swapping of two numbers using call by reference using pointers
#include<stdio.h>
void swap(int *,int *);
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
}
void swap(int *x,int *y){
    printf("Before Swapping:%d %d\n",*x,*y);
    int s;
    s=*x;
    *x=*y;
    *y=s;
    printf("After swapping: %d %d",*x,*y);
}