//Without power function
#include<stdio.h>
#include<math.h>
void power(int x,int y,int z);
int main(){
    int a,b,c;
    printf("Enter the value of base(x) and power(y and z):");
    scanf("%d%d%d",&a,&b,&c);
    power(a,b,c);
}
void power(int x,int y,int z){
    int ans=1;
    for(int i=1;i<=(y+z);i++){
        ans=ans*x;
    }
    return pow(x,y+z);
    printf("The solution is:%d",ans);
}