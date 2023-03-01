#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello there hi          ";
    int count=0,i=0;
    while(s1[i]!='\0'){
        if(s1[i]==' '||s1[i]=='\n'||s1[i]=='\t'){
            ++count;
            }
        i++;
    }
    printf("Total Words:%d",count+1);
}