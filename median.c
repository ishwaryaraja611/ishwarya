#include<stdio.h>
#include<conio.h>
void main() 
{
int x[100],n,i;
float mean(int,int[]);
float median(int,int[]);
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&x[i]);
printf("mean=%f\n",mean(n,x));
printf("median=%f\n",median(n,x));
getch();
}
float mean(int m, int a[]) 
{
int sum=0, i;
for(i=0; i<m; i++)
sum+=a[i];
return((float)sum/m);
}
float median(int n, int x[]) 
{
float temp;
int i, j;
for(i=0; i<n-1; i++) 
{
for(j=i+1; j<n; j++) 
{
if(x[j] < x[i]) 
{           
temp = x[i];
x[i] = x[j];
x[j] = temp;
}
}
}
if(n%2==0) 
{ 
return((x[n/2] + x[n/2 - 1]) / 2.0);
}
else 
{  
return x[n/2];
}
}
