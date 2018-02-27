#include<stdio.h>
int main(void) 
{
	int diff,a,b;
	printf("enter the number a:\n");
	scanf("%d",&a);
	printf("Enter the number b:\n");
	scanf("%d",&b);
	diff=a-b;
	if(diff%2==0)
	{
	printf("it is even");
	}
	else
	{
	  printf("it is odd");
	}
	return 0;
}
