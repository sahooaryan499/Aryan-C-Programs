#include <stdio.h>
int main()
{
     int a[8],i,n,d=0;
     printf("Enter 8 Numbers:\n");
     for(i=0;i<8;i++)
          scanf("%d",&a[i]);
     printf("Enter Number to be Searched : ");
     scanf("%d",&n);
     for(i=0;i<8;i++)
     {
          if(n==a[i])
          {
               printf("\nNumber '%d' Found at Position %d.",n,i+1);
               d=d+1;
          }
     }
     if(d==0)
          printf("\nNumber '%d'is Not Found.",n);
     return 0;
}