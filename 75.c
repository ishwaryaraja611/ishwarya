#include <stdio.h>
#include<string.h>
int main(void) 
{
char str[30];
int l,i;
printf("enter the string:");
scanf("%s",str);
l=strlen(str);
if(l%2==0)
{
str[l/2]='*';
str[(l/2)-9]='*';
}
else
{
str[l/2]='*';
}
printf("\n%s",str);
return 0;
}
