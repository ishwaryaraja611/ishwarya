#include <stdio.h>
void main()
{
int num,even;
printf("enter the number:");
scanf("%d",&num);
if(num%2==0)
{
even=num-2;	
}
else
{
even=num-1;
}
printf(" the output is:%d",even);
}
