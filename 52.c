#include<stdio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
switch(n)
{
case 0: 
printf("ZERO \n");
break;
case 1:
printf("ONE \n"); 
break;
case 2: 
printf("TWO \n");
break;
case 3:
printf("THREE \n");
break;
case 4:
printf("FOUR \n");
break;
case 5:
printf("FIVE \n");
break;
case 6:
printf("SIX \n");
break;
case 7:
printf("SEVEN \n");
break;
case 8:
printf("EIGHT \n");
break;
case 9:
printf("NINE \n");
break;
default:
printf(" MORE THAN 1 DIGIT \n");
break;
return 0;
}
}
