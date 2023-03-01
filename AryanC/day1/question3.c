//Using File Handling When File Does Not Exist
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main(){
	FILE* fp;
	fp=fopen("test.txt","r");
	if(fp==NULL){
		printf("Error:%s\n",strerror(errno));
	}
	fclose(fp);
	return 0;
}


