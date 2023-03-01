#include<stdio.h>
#include"trigo.h"
int main(){
	int b,p,h;
	printf("Enter the base:");
	scanf("%d",&b);
	printf("\nEnter the perpendicular:");
        scanf("%d",&p);
	printf("\nEnter the hypotenuse:");
        scanf("%d",&h);
	printf("Sin is:%d\n",sine(p,h));
        printf("Cos is:%d\n",cosine(b,h));
	printf("Tan is:%d\n",tangent(p,b));
	return 0;
}
