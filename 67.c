#include <stdio.h>
int main(void) 
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	num+=1;
	while(num%10!=0)
	{
		num=num+1;
	}
	printf("the output is\n%d",num);
	return 0;
}
