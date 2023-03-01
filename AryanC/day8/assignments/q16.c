#include<stdio.h>
int main(){
    char ch='a';
    printf("%d\n",ch);
    for(int i=ch;i<=ch+25;i++){
        if(ch==i){
            printf("Its an alphabet\n");
            
        }
        else{
            printf("Not an alphabet\n");
            break;
        }
    }
}