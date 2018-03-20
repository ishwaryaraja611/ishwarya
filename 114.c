#include <stdio.h>
int main(void) 
{
	int i,m,r,a[50],count=1;
	scanf("%d %d",&m,&r);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		if(a[i]%2==1)
		{
			if(count==r)
			{
				printf("%d",a[i]);
			}
		count=count+1;
		}
	}
return 0;
}
