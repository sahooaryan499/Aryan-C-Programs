#include <stdio.h>
#include <string.h>
void main()
{
  char str[25],temp;
  printf("Input string :");
  gets(str);
  //printf("The string appears before sorting %s:\n",str);
  int a = strlen(str);
  
  for(int i=1;i<a;i++){
	    for(int j=0;j<a-i;j++){
	        if(str[j]>str[j+1])
            { 
            temp=str[j];
            str[j]=str[j+1];
            str[j+1]=temp;
            }
        }
  }
      printf("The string appears after sorting :%s\n",str);
 

} 