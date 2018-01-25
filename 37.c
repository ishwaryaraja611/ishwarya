#include <stdio.h>
#include<conio.h>
int main()
{
int c, d, temp;
printf("Enter the value of c and d\n");
scanf("%d%d", &c, &d);
printf("Before Swapping\nc = %d\nd = %d\n",c,d);
temp=c;
c= d;
d= temp;
printf("After Swapping\nc = %d\nd = %d\n",c,d);
return 0;
}
