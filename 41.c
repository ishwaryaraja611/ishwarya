#include<stdio.h>
#include<conio.h>
void main()
{
int i,k;
char a[100];
printf("number of times to be printed:");
scanf("%d",&k);
printf("enter the char\n");
scanf("%s",&a);
for(i=0;i<k;i++)
{
printf("%s\n",a);
}
getch();
}
