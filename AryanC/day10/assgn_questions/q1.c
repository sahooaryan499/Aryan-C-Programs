#include<stdio.h>
int even(int);
int main(){
    int a;
    printf("Enter a number to check:");
    scanf("%d",&a);
    printf(even(a));
}
int even(int x){
    if(x%2==0){
        printf("Even Number!!!\n");
        }
    else{
        printf("Odd Number!!!\n");
    }
}