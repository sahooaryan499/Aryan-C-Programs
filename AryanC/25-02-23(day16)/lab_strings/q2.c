#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
int main(){
    char s1[]="hello";
    int count=0,i=0;
    //printf("LLLL:%d",strlen(s1));
    //fgets(s1,sizeof s1,stdin);
    while(s1[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}