//Count total vowel and consonant in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char a[]="welcome to phytec";
    int i=0,vow=0,con=0,space=0;
    while(a[i]!='\0'){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            vow++;
        }
        else if(a[i]==' '){
            space++;
        }
        else{
            con++;
        }i++;
        }
    printf("Vowels:%d Consonants:%d",vow,con);

}