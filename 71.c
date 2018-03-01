#include<stdio.h>
#include<string.h>
void main()
{
  char str[50],temp[10];
  int a,b,c,d;
  printf("Enter the string \n");
  scanf("%s",&str);
  d=strlen(str);
  while(a<b)
  {
    for(a=0;a<d;a++)
    {
      for(b=0;b<d;b++)
      {
        temp[d]=str[a];
        str[a]=str[b];
        str[a]=str[a];
      }
    }
  }
  printf("yes\n");
}
