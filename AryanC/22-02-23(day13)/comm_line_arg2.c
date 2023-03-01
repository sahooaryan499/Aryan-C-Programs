#include<stdio.h>
int main(int argc,char *argv[]){
        int i,sum=0,n;
        for(i=0;i<argc;i++){
        sscanf(argv[i],"%d",&n);
        sum+=n;
        }
        printf("The name is:%s\n",argv[0]);
        for(i=0;i<argc;i++){
            printf("The name is:%s\n",argv[i]);
        }
        
}

