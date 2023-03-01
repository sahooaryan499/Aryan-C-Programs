#include<stdio.h>
int cube();
int main(){
    printf("%d",cube());
}
int cube(){
    int n;
    printf("Enter a value to find its cube:");
    scanf("%d",&n);
    return n*n*n;
}
