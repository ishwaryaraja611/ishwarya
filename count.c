#include <stdio.h>
int main()
{
long long n;
int count = 0; 
printf("Enter an integer: ");
scanf("%lld", &n);
while(n != 0)   
{
++count;    
}    
printf("Number of digits: %d", count);
}
