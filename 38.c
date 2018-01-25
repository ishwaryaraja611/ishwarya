#include <stdio.h>
int main() 
{
int j = 65;
int p = 120;
printf(" value of j=%d p=%d before swapping", j, p);
j = j ^ p;
p = j ^ p;
j = j ^ p;
printf("value of j=%d p=%d after swapping", j, p);
return 0;
}
