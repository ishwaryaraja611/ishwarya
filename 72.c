#include<stdio.h>
#include<string.h>
void main()
{
  char name[80];
  int i,j,count;
  printf("Enter the string");
  scanf("%s",&name);
  j=strlen(name);
  for(i=0;i<j;i++)
  if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
  count++;
  else
  continue;
  if(count>0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
