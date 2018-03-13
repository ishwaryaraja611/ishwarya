#include "stdio.h"
int main(void) 
{
	int i,m,b,a[50],c=0;
	scanf("%d %d",&m,&b);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		if(a[i]==b)
		{
			c=c+1;
		}
	}
	printf("\n%d",c);
	return 0;
}
