//Copy one string to other
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    
    char str1[]="gud morning";
    char str2[]="hello there";
    strcpy(str1,str2);
    printf("%s\n",str1);
    printf("Total characters copied:%d",strlen(str1));    
}