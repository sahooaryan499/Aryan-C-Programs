#include<stdio.h>
int main(){
    struct simp{
        int i=6;//Output will be error as we cant allocate memory to a variable in a structure 
        char city[] = "chennai";

    };
    struct simp s1;
    printf("%d",s1.city);
    printf("%d",s1.i);
}