//Passing array to nested structure
#include<stdio.h>
#include<string.h>
struct Dept{
    char dept;
};
struct employee
    {
        int emp_no;
        float sal;
        char ename[30];
        struct Dept empdept;
    };
void display(struct employee emp[]){
    printf("Enter name,id number,salary,department:");
    for(int i=0;i<2;i++){
        scanf("%s %d %f %s",emp[i].ename,&emp[i].emp_no,&emp[i].sal,emp[i].empdept.dept);
    }
    for(int i=0;i<2;i++){
        printf("Employee_name:%s Id:%d Salary:%f\n Department:%s",emp[i].ename,emp[i].emp_no,emp[i].sal,emp[i].empdept.dept);
    }
}
int main(){
    struct employee emp[2];
    display(emp);
}
