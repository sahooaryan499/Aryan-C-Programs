/*Write a program to enter the values of two variables 'a' and 'b' from keyboard and
 then check if both the conditions 'a < 50' and 'a < b' are true.*/
#include<stdio.h>
int main(){
    int a,b; 
    printf("Enter values of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a<50 && a<b){
        printf("Both are true");
    }
    else{
        printf("Both not true");
    }
    
}