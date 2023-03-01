//On detecting eof program returns a non-zero value and breaks the loop
#include<stdio.h>
#include<stdbool.h>
int main(){
	FILE* fp;
	fp=fopen("new.txt","r");
	if(fp==NULL){
		perror("Messages from perror");
		return -1;
	}
	while(true){
		char ch=fgetc(fp);
		if(feof(fp)){
			break;
		}
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}


