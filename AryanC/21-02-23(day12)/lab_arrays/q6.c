#include<stdio.h>
int main(){
    int a[5];
    printf("Enter 5 integers:");
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=4;i++){    
        if(a[i]%2!=0){
            printf("%d\t",a[i]);
            }
    }
    
       
}