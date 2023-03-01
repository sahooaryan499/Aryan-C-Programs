int main()

{

char s1[] = "beautiful big sky country", s2[] = "how now brown cow";

printf("%d\n",strlen (s1)); 
printf("%d\n",strlen (s2+8)); 
printf("%d\n", strcmp(s1,s2)); 
printf("%s\n",s1+10); 
printf("%s\n", s1);

strcpy(s1+10,s2+8); 
strcat(s1,"s!");

return 0;

}