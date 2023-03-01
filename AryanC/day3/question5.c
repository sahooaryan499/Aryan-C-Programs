#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("\nEnter a number:");
        scanf("%d",&b);
	printf("\nEnter a number:");
        scanf("%d",&c);
	if(a>b && a>c){
	printf("The largest is:%d",a);
	}
	if(b>a && b>c){
        printf("The largest is:%d",b);
        }
	if(c>a && c>b){
        printf("The largest is:%d",c);
        }





}
