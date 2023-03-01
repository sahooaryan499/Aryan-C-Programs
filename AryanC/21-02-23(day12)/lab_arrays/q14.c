#include<stdio.h>
int main(){
    int a[10],b;
    printf("Enter size:");
    scanf("%d",&b);
    printf("Enter %d integers:",b);
    for(int i=0;i<=b-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=b-1;i>=0;i--){
        printf("%d",a[i]);
    }
}