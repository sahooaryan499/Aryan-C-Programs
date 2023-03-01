#include<stdio.h>
int main(){
	int num[5],sum=0;
	printf("Enter the numbers:");
	scanf("%d",&num[0]);
	printf("Enter the numbers:");
        scanf("%d",&num[1]);
	printf("Enter the numbers:");
        scanf("%d",&num[2]);
	printf("Enter the numbers:");
        scanf("%d",&num[3]);
	printf("Enter the numbers:");
        scanf("%d",&num[4]);
	for(int i=0;i<5;i++){
		if(num[i]%2!=0)
		{
			sum+=num[i];
		}


	}
	printf("Sum is:%d",sum);
}
