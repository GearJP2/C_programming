#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int n = 0;
    int temp = 0;

    scanf("%d", &n);

    float a[n];
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    float avg = sum / n;
    float min = a[0];
    float max = a[0];
    int ind_max, ind_min;
    i = 0;

    while (i < n)
    {
        if (min > a[i])
        {
            min = a[i];
            ind_min = i;
        }
        else if (max < a[i])
        {
            max = a[i];
            ind_max = i;
        }
        i++;
    }
    printf("Maximum value: %10.2f\n", max);
    printf("Minimum value: %10.2f\n", min);
    printf("Maximum index: %10d\n", ind_max);
    printf("Minimum index: %10d\n", ind_min);
    printf("Average: %10.2f\n", avg);
    printf("Reverse order: ");

    for (i = n-1; i >= 0; i--)
    {
        printf("%.2f ", a[i]);
    }

    printf("\nAbove average list: ");

    for (i = n - 1; i >= 0; i--)
    {
        if (avg < a[i])
        {
            printf("%.2f ", a[i]);
        }
    }

    printf("\nNegative coordinates: ");

    for(i = 0; i <= n; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        { if (a[i] < 0 && a[j] < 0)
        {
            printf("(%.2f, %.2f), ", a[i], a[j]);
        }
        }
    }
}