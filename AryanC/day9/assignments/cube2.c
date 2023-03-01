//Type 1
#include<stdio.h>
void cube();
int main(){
    cube();
}
void cube(){
    int n;
    printf("Enter a value to find its cube:");
    scanf("%d",&n);
    printf("%d",n*n*n);
}
