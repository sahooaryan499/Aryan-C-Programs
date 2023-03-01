#include<stdio.h>
int area(int x,int y);
int peri(int x,int y);
int main(){
    int l,b;
    printf("Enter l and b respectively:");
    scanf("%d%d",&l,&b);
    printf("Area:%d\nPerimeter:%d\n",area(l,b),peri(l,b));
}
int area(int x,int y){
    return x*y;
}
int peri(int x,int y){
    return 2*(x+y);
}