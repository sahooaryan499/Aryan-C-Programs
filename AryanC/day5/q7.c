/*Write a program to reverse a 3-digit number which is entered from keyboard. */
#include<stdio.h>
int main(){
    int rev=0,rem,a;
    printf("Enter integer:");
    scanf("%d",&a);
    while (a!=0)
    {
        /* code */
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
        

    }
    printf("Reversed Number is:%d\n",rev);
    
}

