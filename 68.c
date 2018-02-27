#include<stdio.h>
int main(void) 
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	if(num%7==0)
	{
	  printf("yes");
	}
	else
	{
	  printf("no");
	}
	return 0;
}
