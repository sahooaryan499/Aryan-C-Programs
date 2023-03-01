//Error when the file is being accessed in the wrong access mode
#include<stdio.h>
int main(){
	FILE* fp;
	fp=fopen("test.txt","w");
	char ch=fgetc(fp);
	if(ferror(fp)){
		printf("File is opene in writing mode");
		printf("\nError in reading file");
		perror("Error Message from perror");
	}
	fclose(fp);
	return(0);
}


