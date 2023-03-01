#include<stdio.h>
int main(){
	int sal,id,hrs;
	float amt;
	printf("Enter the employee id:\n");
	scanf("%d",&id);
	printf("Enter employee working hours per month:\n");
	scanf("%d",&hrs);
	printf("Amount received per hour:");
	scanf("%f",&amt);
	sal=hrs*amt;
	printf("Employee id:%d\n total Salary is:%d\n",id,sal);

}
