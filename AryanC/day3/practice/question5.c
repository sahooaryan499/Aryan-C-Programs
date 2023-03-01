#include<stdio.h>
int main(){
	int amount,rest,n100,n50,n20,n10,n5,n2,n1;
	printf("Enter the amount:");
	scanf("%i",&amount);
    n100 = amount / 100;
    rest = amount % 100;
    
    n50 = rest / 50;
    rest = rest % 50;
    
    n20 = rest / 20;
    rest = rest % 20;
    
    n10 = rest / 10;
    rest = rest % 10;
    
    n5 = rest / 5;
    rest = rest % 5;
    
    n2 = rest / 2;
    rest = rest % 2;
    
    n1 = rest;
    printf("%i notes of 100\n",n100);
    printf("%i notes of 50\n",n50);

    printf("%i notes of 20\n",n20);

    printf("%i notes of 10\n",n10);

    printf("%i notes of 5\n",n5);

    printf("%i notes of 2\n",n2);

    printf("%i notes of 1\n",n1);

}
