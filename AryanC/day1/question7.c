//To terminate the program using EXIT_SUCCESS and EXIT_FAILURE
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE* fp;
	fp=fopen("hi.txt","r");
	if(fp==NULL){
		printf("Value of errno:%d\n",errno);
		perror("Error printed by perror");
		exit(EXIT_FAILURE);
		
	}
	else{
		fclose(fp);
		exit(EXIT_SUCCESS);
	}
	return 0;
}
	



