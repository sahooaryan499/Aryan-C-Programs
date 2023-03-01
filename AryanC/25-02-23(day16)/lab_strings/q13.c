#include <stdio.h>
#include <string.h>
void main()
{
    char str[50],substr[50];
    int n,i,l;
    printf("Enter the string:");
    gets(str);
    printf("\nThe actual string is:%s",str);
    printf("Enter the position to start extraction:");
    scanf("%d",&n);
    printf("Enter length of string:");
    scanf("%d",&l);
    for(i=0;i<=l;i++){
        substr[i]=str[n+i-1];
    }
    substr[i]='\0';
    printf("The substring retrive from the string is:%s",substr);
}