//Using malloc() function
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
extern int errno;
void main(){
	char *ptr=malloc(88888888888888);
	if(ptr==NULL){
		puts("malloc failed");
		puts(strerror(errno));
		exit(EXIT_FAILURE);
	}
	else
	{
		free(ptr);
		exit(EXIT_SUCCESS);
	}
}
