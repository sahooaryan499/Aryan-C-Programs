//Displaying Error Using perror() when no file is available
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main(){
	FILE *file1;
	file1=fopen("test.txt","r");
	if(file1==NULL){
		perror("Message from perror");
		return -1;
	}
	fclose(file1);
	return 0;
}
