#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;//Declaring file pointer
    char name[30];
    printf("Enter a new file name:");
    scanf("%[^\n]",name);
    fp=fopen(name,"w");//fp holds the address of where the file is created
    if(fp==NULL){
        printf("\n Failed to create\n");
        exit(1);
        }
        printf("\nFile created successfully");
        fclose(fp);
}