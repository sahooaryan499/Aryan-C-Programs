#include<stdio.h>
#include<errno.h>
#include<string.h>
extern int errno;
int main(){
	FILE *file1;
	int errnum;
	file1=fopen("filess.txt","rb");
	if(file1=NULL){
		errnum=errno;
		fprintf(stderr,"Value of errno:%d\n",errno);
		perror("Error printed by perror");
		fprintf(stderr,"Error Opening File:%s\n",strerror(errnum));
	}
	else{
		fclose(file1);
	}
	return 0;
}

