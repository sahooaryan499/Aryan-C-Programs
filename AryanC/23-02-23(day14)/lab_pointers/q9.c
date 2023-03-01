#include<stdio.h>
void large(int *,int *);
int main(){
    int n1,n2,*p,*q;
    //int res;
    printf("Enter 1st num:");
    scanf("%d",&n1);
    printf("Enter 2nd num:");
    scanf("%d",&n2);
    //res=large(n1,n2);
    //printf("%d is greater",*res);
    *p=n1;
    *q=n2;
    large(p,q);
}
void large(int *x,int *y){
    if (*x>*y){
        printf("%d is greater",*x);
    }
    else{
        printf("%d is greater",*y);
    }
}