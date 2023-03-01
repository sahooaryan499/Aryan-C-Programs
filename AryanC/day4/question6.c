#include<stdio.h>
int main(){
	int a,b,div;
	printf("Enter num1:");
	scanf("%d",&a);
	printf("Enter num2:");
        scanf("%d",&b);
	div=b/a;
	if(a%b==0){
		printf("%d",div);
	}
	else{
	printf("Not possible");
	}
	

}

