#include <stdio.h>
#include<conio.h>
int main()
{
char ab;
printf("Enter any character: ");
scanf("%c", &ab);
if((ab >= 'a' && ab <= 'z') || (ab >= 'A' && ab <= 'Z'))
{
printf("'%c' is alphabet.", ab);
}
else if(ab >= '0' && ab <= '9')
{
printf("'%c' is digit.", ab);
}
else 
{
printf("'%c' is special character.", ab);
}
return 0;
}
