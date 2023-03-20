#include<stdio.h>
//typedef unsigned int ui
#pragma pack(1)
struct cal{
    //unsigned int m:4;
    unsigned int d:4;
    //unsigned int y:12;
    //int j;
}dat;
int main(){
    printf("%d",sizeof(dat));
}