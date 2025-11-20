#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int n[4] = {0, 0, 0, 0};

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4 - i - 1; j++)
        {
            if (n[j] < n[j + 1])
            {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    printf("%d", n[0] * n[2]);
}