#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello";
    int len=strlen(s1);
    int i=0;
    while(s1[i]!='\0'){
        printf("%c",s1[len-i-1]);
        i++;
    }
    
}