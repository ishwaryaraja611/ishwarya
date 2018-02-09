#include<stdio.h>
#include<string.h>
void swap(int*,int*);
void main()
{
int x,y;
printf("enter the two numbers of x and y \n" );
scanf("%d%d",&x,&y);
printf("the number before swapping are x=%d y=%d \n",x,y);
swap(&x,&y);
printf("the number after swapping are x=%d y=%d \n ",x,y);
}
void swap(int*x,int*y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
