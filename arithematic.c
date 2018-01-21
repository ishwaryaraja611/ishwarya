#include <stdio.h>
int main()
{
    int counter, limit, common_difference, term;
    printf("\nEnter Total Number of Terms: \t");
    scanf("%d", &limit);
    printf("\nEnter Common Difference: \t ");
    scanf("%d", &common_difference);
    printf("\nArithmetic Sequence From 1 To %d:\n", limit);
    for(counter = 1; counter <= limit; counter++)
    {
    term = 1 + (counter - 1) * common_difference;
    printf("%d \t", term);
    }
    printf("\n\n");
    return 0;
}
