#include<stdio.h>
int main(int argc,char *argv[]){
        int i,sum=0,n;
        for(i=1;i<argc;i++){
        sscanf(argv[i],"%d",&n);
        sum+=n;
        }
        printf("The sum is:%d\n",sum);
}

