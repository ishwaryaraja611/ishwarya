#include <stdio.h>
int main(void) 
{
int j,m,k,a[50],temp;
scanf("%d %d",&m,&k);
for(j=0;j<m;j++)
{
scanf("%d",&a[j]);
}
for(j=1;j<=m;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
for(j=1;j<=m;j++)
{
if(j==k-1)
{
printf("%d",a[j]);
}
}
return 0;
}
