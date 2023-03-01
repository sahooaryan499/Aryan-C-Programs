#include<stdio.h>
int main(int argc,char *argv[]){
    char s[5];
    int i,sum=0,n,prod=1;
    sscanf(argv[1],"%[^\n]%*c",s);
    if((argv[1]='-s'){
        
        for(i=2;i<argc;i++){
        sscanf(argv[i],"%d",&n);
        sum+=n;
        }
        printf("The sum is:%d\n",sum);
    }
    if(strcmp((argv[1],"-p")==0)){
        int i,prod=1,n;
        for(i=2;i<argc;i++){
        sscanf(argv[i],"%d",&n);
        prod*=n;
        }
        printf("The Product is:%d\n",prod);
    }
}

