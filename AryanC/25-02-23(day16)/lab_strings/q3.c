#include<stdio.h>
#include<stdlib.h>
int main(){
    char s1[50]={"hello"};
    char *s=s1;
    for(int i=0;s1[i]!='\0';i++){
        printf("%c ",*(s1+i));
    }
    
}