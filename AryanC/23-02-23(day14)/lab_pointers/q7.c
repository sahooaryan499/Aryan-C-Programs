#include<stdio.h>
int main(){
    int *p,n=5,sum=1;
    p=&n;
    for(int i=0;i<n;i++){
        sum*=(*p - i);
        printf("%d\n",sum);
        
    }
}