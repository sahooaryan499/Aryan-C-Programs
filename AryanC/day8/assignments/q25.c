//Reverse a number
#include<stdio.h>
int main(){
    int num,rev_num=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0){
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    printf("%d",rev_num);
}