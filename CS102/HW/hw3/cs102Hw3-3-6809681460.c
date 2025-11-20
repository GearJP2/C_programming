#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0, y = 0;
    int n = 0;
    scanf("%d", &n);
    int a[n][n];
    int b[(n * 2) + 2];
    int isDup = 0;

    for (i = 0; i < (n * 2) + 2; i++)
    {
        b[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[y] += a[i][j];
        }
        y++;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[y] += a[j][i];
        }
        y++;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                b[y] += a[j][i];
            }
        }
    }
    y++;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                b[y] += a[j][i];
            }
        }
    }

    for (i = 0; i < (n * 2) + 2; i++)
    {
        if (b[0] != b[i])
        {
            isDup++;
        }
    }

    if (isDup)
    {
        printf("This is NOT magic sqaure!");
    } else {
        printf("This is magic square!");
    }
    
}
