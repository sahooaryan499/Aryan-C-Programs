#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,10},sum=0,i;
    for(i=0;i<=5;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}