#include<stdio.h>
struct decl{
    int n=100;//This will show error
}dl;
int main(){
    printf("%d",dl.n);
}