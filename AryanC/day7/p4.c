#include<stdio.h>
int main(){
    int a,j,l,b,s;
    printf("Enter an integer to find its binary:\n");
    scanf("%d",&a);
    printf("Enter an integer to find its binary:\n");
    scanf("%d",&b);
    for(int i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        if(j==1)
        {
            /* code */
        }
        
        l=(b>>i) & 0x1;
        s=j && l;
        printf("%d",s);
        }
}
        
        
        
 
    
