#include<stdio.h>
int main(){
    char ch;
    printf("ENter a character to check for vowels:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Its a vowel");
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Its a vowel");
    }
    else{
        printf("Consonant");
    }
}