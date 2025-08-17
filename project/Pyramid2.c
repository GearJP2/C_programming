#include <stdio.h>

int main()
{
    int i;
    int j;
    int n;

    scanf("%d", &n);

    int arr[n][2*n-1];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2*n-1; j++)
        {
            if (j == 0 || j == i || i == n - 1 || j<i || j == 2*n-1 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}