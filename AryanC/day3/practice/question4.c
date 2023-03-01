/*Write a C program that accepts two item’s weight (floating points' values ) and
number of purchase (floating points' values) and calculate the average value of the items.
Test Data*/
#include<stdio.h>
int main(){
	float wt1,wt2,n1,n2,pur1,avg,pur2,x;
	
	printf("Enter the weight of item 1:");
	scanf("%f",&wt1);
	printf("Enter the number of item 1:");
        scanf("%f",&n1);
	printf("Enter the weight of item 2:");
        scanf("%f",&wt2);
	printf("Enter the number of item 2:");
        scanf("%f",&n2);
	pur1=wt1*n1;
	pur2=wt2*n2;
	x=pur1+pur2;
	avg=x/(n1+n2);
	printf("The averrage is:%f",x/(n1+n2));






}
