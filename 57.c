#include<stdio.h>
void main()
{
int x,y,temp;
printf("enter the two numbers x and y \n");
scanf("%d %d",&x,&y);
printf("Before swapping \n");
printf("\nx=%d",x);
printf("\ny=%d",y);
temp=x;
x=y;
y=temp;
printf("after swapping \n");
printf("\nx=%d",x);
printf("\ny=%d",y);
}
