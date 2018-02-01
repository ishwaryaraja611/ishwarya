#include<stdio.h>
int main()
{
int num,count=1,i;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
count++;
}
printf("%d",count+1);
return 0;
}
