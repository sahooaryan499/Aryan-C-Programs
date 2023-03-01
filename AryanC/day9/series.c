#include<stdio.h>
#include<math.h>
int series(int x,int n);
int main(){
    int x,n;
    float s;
    printf("Enter the value of x and n:");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++){
        if(i==n){
            printf(" (1/%d^%d) ",x,i);
        }
        else{
            printf(" (1/%d^%d) + ",x,i);
        }
    }
    s=series(x,n);
    printf("Sum of series:%.3f",s);
    return 0;

}
int series(int x,int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum+(1/pow(x,i));
        }
    return sum;
}