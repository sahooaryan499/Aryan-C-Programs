#include<stdio.h>
int main(){
    struct play{
        int playnum;
        char name[10];
    };
    struct play p1 = {"virat",18};
    struct play p2 = p1;
    if(p1==p2){ // We cannot compare two structure variables
        printf("Two structures equal");
    }
}