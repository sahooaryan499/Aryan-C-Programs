//maximum occuring character.
#include<stdio.h>
#define size 100 
#define chars 255 
int main(){
   char string[size];
   int freq[chars];
   int i = 0, max;
   int value;
   printf("Enter the string:");
   gets(string);
   for(i=0; i<chars; i++){
      freq[i] = 0; 
   }
   i=0;
   while(string[i] != '\0'){
      value = (int)string[i];
      freq[value] += 1;
      i++;
   }
   max = 0;
   for(i=0; i<chars; i++){
      if(freq[i] > freq[max])
         max = i;
      }
      printf("max occurrence character is '%c' = %d times.", max,
      freq[max]);
   return 0;
}