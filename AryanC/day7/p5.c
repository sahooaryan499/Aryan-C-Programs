#include<stdio.h>
int main(){
    int a,j,count=0;
    printf("Enter an integer to find its binary:\n");
    scanf("%d",&a);
    for(int i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        if (j==1)
        {
            count++;
        }
        printf("%d",j);
        
         }
         printf("\n%d",count);
    }
    
