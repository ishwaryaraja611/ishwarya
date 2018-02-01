#include<stdio.h>
{
int main()
char str1[20],str2[20],i,j;
printf("\n Enter first string");
Scanf("%s",&str1[i]);
printf("\n Enter second string");
scanf("%s",&str2[j]);
for(i=0;str1[i]!='\0';i++)
for(j=0;str2[j]!='\0';j++,i++)
{
str1[i]=str2[j];
}
str1[i]='\0';
printf("concatenate string %s",srt1[i]);
return 0;
}

