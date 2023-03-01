#include<stdio.h>
int main(){
	int x=5,y=10,z;
	z=x;
	x=y;
	y=z;
	
	printf("x:%d y:%d",x,z);
}
