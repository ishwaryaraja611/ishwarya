#include<stdio.h>
void main()
{
  int i,j,n;
  printf("enter the number");
  scanf("%d",&n);
  printf("enter the left and right range:");
  scanf("%d %d",&i,&j);
  if(n>i && n<j)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
