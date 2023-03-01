#include<stdio.h>
int main(){
    int a[10],sum1=0,sum2=0,b;
    printf("Enter first 5 integers:");
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
        sum1+=a[i];
    }
    printf("Enter second 5 integers:");
    for(int i=5;i<=9;i++){
        scanf("%d",&a[i]);
        sum2+=a[i];
    }
    if(sum1==sum2){
        printf("Equal");
    }
    else{
        printf("Not equal");
    }
}