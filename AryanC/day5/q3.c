/*Write a program to enter the values of two variables 'a' and 'b' from keyboard and
 then check if both the conditions 'a < 50' and 'a < b' are true.
Now solve the above question to check if atleast one of the conditions
 'a < 50' and 'a < b' is true.*/
#include<stdio.h>
 int main(){
    int a,b;
    printf("Enter values of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a<50){
        printf("a is <50\n");
    }
    else if(a<b){
        printf("a<b is true");
    }
    else if (a<50 && a<b){
        printf("a<b and a<50");
    }
    else{
        printf("None of them is true");
    }
}