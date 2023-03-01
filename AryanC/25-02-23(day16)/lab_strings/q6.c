#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello";
    char s2[]="hewllo";
    int i=0,flag=0;;
    while(s1[i]!='\0'){
        if(s1[i]!=s2[i]){
            printf("Not Equal");
            flag=1;
            break;
            }i++;
    }
    if(flag==0){
        printf("Equal");
    }
    
    
    
}