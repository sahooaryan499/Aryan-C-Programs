#include<stdio.h>

int add();
int main(){
    add();
    add();
    add();
    add();
}
int add(){
    static int count=0;
    printf("%d\t%d\n",++count,&count);
}

