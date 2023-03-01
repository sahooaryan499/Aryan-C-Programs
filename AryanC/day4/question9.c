#include<stdio.h>
int main(){
	int x=5,y=10;
	x=x-y;
	y=x+y;
	x=y-x;
	printf("x:%d y:%d",x,y);
}
