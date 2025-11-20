#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    int a[3];
    int count = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    while (a[0] > 1 || a[1] > 1 || a[2] > 1)
    {
        for (i = 0; i < 3; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
                count++;
            }
            else if (a[i] > 1 && a[i] % 2 != 0)
            {
                a[i] = a[i] - 1;
            }
        }
        i = 0;
       
    }

    printf("%d", count);
}