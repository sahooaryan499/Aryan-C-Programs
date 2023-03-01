//Passing array to structure
#include<stdio.h>
#include<string.h>
struct employee
    {
        int emp_no;
        float sal;
        char ename[30];
    };
void display(struct employee emp[]){
    printf("Enter name,id number,salary:");
    for(int i=0;i<2;i++){
        scanf("%s %d %f",emp[i].ename,&emp[i].emp_no,&emp[i].sal);
    }
    for(int i=0;i<2;i++){
        printf("Employee_name:%s Id:%d Salary:%f\n",emp[i].ename,emp[i].emp_no,emp[i].sal);
    }
}
int main(){
    struct employee emp[2];
    display(emp);
}
