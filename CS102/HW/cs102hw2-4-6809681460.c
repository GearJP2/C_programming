#include <stdio.h>
#include <time.h>

int main()
{

    int i = 13;
    int a = 0;
    int b = 0;
    int min = 0, max = 0;
    int mul = 1;

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

    for (i = min; i < max; i++)
    {
        if (i % 13 == 0)
        {
            printf("%d\n", i);
        }
    }
    

    printf("Bye!!");
}