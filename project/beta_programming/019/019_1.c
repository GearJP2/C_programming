#include <stdio.h>

int a(int base, int up)
{
    int i = 0;
    int result = base;
    for (i = 1; i < up; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int n = 0;

    scanf("%d", &n);

    int i = 0, j = 0, k = 0;
    int s[n];
    int b[n];

    int sizeofs_b = a(2, n) - 1;
    int temp = 0;
    int min = 100;

    int temp2 = 0;
    int min2 = 100;

    int temp3 = 0;
    int min3 = 100;

    int s_[sizeofs_b];
    int b_[sizeofs_b];

        for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s[i], &b[i]);
    }

    for (i = 0; i < sizeofs_b; i++)
    {
        s_[i] = 1;
        b_[i] = 0;
    }

    int count = 1;

    int last = 0;

    for (i = 0; i < sizeofs_b; i++)
    {
        for (j = 0; j < count; j++)
        {
            for (k = 0; k < n - count + 1; k++)
            {
                s_[i] *= s[k];
                b_[i] *= b[k];
            }
        }
        count++;
    }


    printf("This is s_: ");
        for (i = 0; i < sizeofs_b; i++)
    {
        printf("%d ", s_[i]);
    }
    printf("\n");
    printf("This is b_: ");
            for (i = 0; i < sizeofs_b; i++)
    {
        printf("%d ", b_[i]);
    }

    
}