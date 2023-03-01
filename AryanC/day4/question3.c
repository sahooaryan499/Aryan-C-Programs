#include<stdio.h>
int main(){
	float avg;
	int dist,fuel;
	printf("Enter total distance travelled:");
	scanf("%d",&dist);
	printf("Enter total fuel spent:");
        scanf("%d",&fuel);
	avg=dist/fuel;
	printf("The average is:%f\n",avg);	
	return 0;
}
