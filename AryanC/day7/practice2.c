#include<stdio.h>
int main(){
    int a,j,k;
    printf("Enter an integer to find its binary:\n");
    scanf("%d",&a);
    for(int i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        printf("Position:%d\n",i);
        printf("%d",j);
        if(i==1 && j==0){
            printf("Bulb won't glow");
            }
        }
        
}
    
