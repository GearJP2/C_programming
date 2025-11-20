#include <stdio.h>

int main()
{
    int i;
    int j;
    int n;

    scanf("%d", &n);

    int arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == 0 || j == i || i == n - 1 || j<i)
            {
                printf("*");
            }
            else
            {
                printf("x");
            }
        }
        printf("\n");
    }
}