#include<stdio.h>
int main(void)
{
int num,i,flag=0;
printf("Enter the numbers");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n  it is a prime number");
}
else
{
printf("\n it is not a prime number");
}
return 0;
}
