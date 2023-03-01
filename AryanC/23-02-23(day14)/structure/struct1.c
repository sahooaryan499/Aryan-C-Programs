#include<stdio.h>
#include<string.h>
struct emp
    {
        int emp_no;
        float sal;
        char ename[9];
    }employee;
int main(){
    employee.emp_no=10;
    employee.sal=50000;
    (strcpy(employee.ename,"SDI"));
    printf("%s\n",employee.ename);
    printf("%lu",sizeof(employee));
    
}