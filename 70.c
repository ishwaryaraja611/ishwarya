#include<stdio.h>
#include<math.h>
int main(void) 
{
	int n,i,x,y,z;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  x=pow(2,i);
	  if(x>n)
	  {
	    y=i;
	    break;
	  }
	}
	z=pow(2,y);
	printf(" the output is\n%d",z);
	return 0;
}
