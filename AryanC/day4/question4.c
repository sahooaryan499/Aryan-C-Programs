/*Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15*/
#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter 2 integers respectively:");
	scanf("%d%d",&n1,&n2);
	if(n1%n2==0){
		printf("Multiplied");
	}
	else{
		printf("Not Multiplied");
	}
}
