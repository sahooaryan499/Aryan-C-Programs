//Type 2
#include<stdio.h>
int cube(int x);
int main(){
    int x;
    printf("Enter a number to find its cube:");
    scanf("%d",&x);
    printf("%d",cube(x));
}
int cube(int x){
    return x*x*x;
}