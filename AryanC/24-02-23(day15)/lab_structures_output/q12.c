#include<stdio.h>
int main(){
struct branch{
    char bran[10]="banglore";
    int bpin=431;
};
struct headoff
{
    char head[10];
    int bpin;
};
struct headoff h={"chennai",01};
struct branch b;
printf("HO:%s\n hpin - %d",h.head,h.bpin);
printf("BO:%s\n hpin - %d",b.bran,b.bpin);



}