#include<stdio.h>
int main(){
    int a[8],sum1=0,grt=0,low;
    float avg=0;
    printf("Enter 8 integers:");
    for(int i=0;i<=7;i++){
        scanf("%d",&a[i]);
        sum1+=a[i];
        avg=sum1/8;
        if(a[i]>grt){
            grt=a[i];
            }
        if(a[i]<low){
            low=a[i];
        }
        }
    
        
    printf("Sum is:%d\n",sum1);
    printf("Average is:%f\n",avg);
    printf("Greatest is:%d",grt);
    printf("Smallest is:%d",low);
}