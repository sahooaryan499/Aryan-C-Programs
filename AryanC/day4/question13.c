#include<stdio.h>
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0){
	printf("Zero");
	}
	else if(num>0 && num%2==0){
		printf("Positive and even");

	}
	else if(num>0 && num%2!=0){
		printf("Positive and odd");
		
	}
	else if(num<0 && num%2==0){
		printf("Negative and even");
	}
	else{
	printf("Negative and odd");

	//else{
	//printf("Negative and even");}
}
}
