#include<stdio.h>
int main(){
    int n,a[20];
    int *p=a;
    printf("Enter total elements to be stored:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("Values are:%d\n",*(p+i));
    }
}