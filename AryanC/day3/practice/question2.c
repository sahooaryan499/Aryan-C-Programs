#include<stdio.h> 
int main(){
	int days,year,week,d;
	printf("Enter days:");
	scanf("%d",&days);
	year=days/365;
	week = (days % 365)/7;
    	d = days- ((year*365) + (week*7));
	printf("years:%d Weeks:%d Days:%d\n",year,week,d);
}
