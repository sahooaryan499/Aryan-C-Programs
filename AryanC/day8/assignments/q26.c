#include<stdio.h>
#include<math.h>
int main(){
    int p,n,res;
    printf("Enter a number to find its power:");
    scanf("%d",&n);
    printf("Enter power:");
    scanf("%d",&p);
    res=pow(n,p);
    printf("Power is:%d",res);
    

}