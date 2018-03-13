#include <stdio.h>
int main(void) 
{
	int i,m,b,a[50],flag=0;
	scanf("%d %d",&m,&b);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		if(a[i]==b)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
