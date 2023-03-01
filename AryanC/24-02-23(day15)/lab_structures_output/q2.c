#include<stdio.h>

    struct {
        int i;
        float ft;
    }decl;
    int main(){
        decl.i=4;
        decl.ft=7.8888;
        printf("%d %.2f",decl.i,decl.ft);

    }
