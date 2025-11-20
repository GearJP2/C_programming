#include <stdio.h>

int main()
{
    int a, b;
    int min, max;
    int first_multiple;

    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if (min % 13 == 0)
    {
        first_multiple = min;
    }
    else
    {
        first_multiple = min + (13 - min % 13);
    }
    
    printf("All the numbers that can be divided by 13 are:\n");

    for (int i = first_multiple; i <= max; i += 13)
    {
        printf("%d\n", i);
    }

    printf("Bye!!\n");
    return 0;
}