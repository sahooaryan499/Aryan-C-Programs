/*.The total number of students in a class are 45 out of which 25 are boys.
 If 80% of the total students secured grade 'A' out of which 15 are boys,
 then write a program to calculate the total number of girls getting grade 'A'.*/
#include<stdio.h>
int main(){
    int total=45,b=25,g;
    g=(0.8*total)-15;
    printf("girls having A grade:%d\n",g);

}