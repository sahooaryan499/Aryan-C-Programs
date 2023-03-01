#include<stdio.h>
int main(){
    int a[10],grt=0,b;
    printf("Enter size:");
    scanf("%d",&b);
    printf("Enter %d integers:",b);
    for(int i=0;i<=b-1;i++){
        scanf("%d",&a[i]);
        if(a[i]>grt){
            grt=a[i];
            }
            }
    printf("Greatest is:%d",grt);
}