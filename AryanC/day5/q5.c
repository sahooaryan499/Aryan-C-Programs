/*. Write a program to calculate the sum of the first and the second last digit of
a 5 digit number entered from the keyboard.*/
#include<stdio.h>
int main(){
    int a,sum,b,c,count=0;
    printf("Enter a 5 digit number:");
    scanf("%d",&c);
    for(int i=0;i<5;i++){
        c=c/10;
        count++;
        if(count==1){
            a=c%10;
        }
        else if(count==4){
            b=c%10;
        }
    }
    printf("the sum is:%d\n",b+a);
    
}