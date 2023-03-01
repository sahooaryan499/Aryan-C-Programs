#include<stdio.h>
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int main(){
    int a,b;
    printf("Enter a and b:\n");
    scanf("%d%d",&a,&b);
    printf("a+b:%d\n",add(a,b));
    printf("a-b:%d\n",sub(a,b));
    printf("a*b:%d\n",mul(a,b));
    printf("a/b:%d\n",div(a,b));
}
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}
