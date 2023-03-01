#include<stdio.h>
int main(){
    int a[10],sum1=0,sum2=0,b;
    printf("Enter 10 integers:");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum1+=a[i];
            }
        else if(a[i]!=0){
            sum2+=a[i];
            }
        }
        printf("Sum of even numbers:%d\n Sum of all odd numbers:%d",sum1,sum2);
}