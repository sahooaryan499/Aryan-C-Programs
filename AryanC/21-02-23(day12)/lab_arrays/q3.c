#include<stdio.h>
int main(){
    int a[11],sums=0,b;
    printf("Enter 10 integers:");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
        sums+=a[i];
    }
    printf("%d",sums);
    
}