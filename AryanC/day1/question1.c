//Division By Zero Question-1
#include<stdio.h>
#include<stdlib.h>
int main(){
	int dividend=20;
	int divisor=0;
	int quotient;
	if(divisor==0){
		fprintf(stderr,"Division By Zero! Exiting...\n");
		exit(-1);
	}
	quotient=dividend/divisor;
	fprintf(stderr,"Value of quotient:%d\n",quotient);
}
