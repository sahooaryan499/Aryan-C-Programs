//Palindrome Program
#include<stdio.h>
int main(){
    int a,rev_num,cp;
    printf("Enter a number to check:\n");
    scanf("%d",&a);
    cp=a;
    while(a>0){
        rev_num = rev_num * 10 + a % 10;
        a = a / 10;
    }
    if(rev_num==cp){
        printf("Its a palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}