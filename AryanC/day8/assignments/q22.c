#include<stdio.h>
int main(){
    int lcm,a,b,gcd;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
        }
    lcm=(a*b)/gcd;
    printf("%d",lcm);    
}