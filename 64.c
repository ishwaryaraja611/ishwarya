#include <stdio.h>
void main() 
{
int a,b,sum;
printf("Enter the number of a:");
scanf("%d",&a);
printf("Enter the number of b:");
scanf("%d",&b);
sum=a+b;
if(sum%2==0)
{
printf("\n even");
}
else
{
printf("\n odd");
}
}
