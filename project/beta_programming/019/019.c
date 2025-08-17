#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0, j = 0, k = 0;
    int s[n];
    int b[n];

    int temp = 0;
    int min = 100;

    int temp2 = 0;
    int min2 = 100;

    int temp3 = 0;
    int min3 = 100;

    int s_ = 1;
    int b_ = 0;

    int last = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s[i], &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = i+1; k < n; k++)
            {
                s_ *= s[j];
                b_ += b[j];
                temp = (s[i] * s[k]) - b[j];
                temp2 = (b[i] + b[k]) - s[j];
                temp3 = s_ - b_;
                if (temp < min && temp > 0)
                {
                    min = temp;
                }
                else if (temp2 < min2 && temp2 > 0)
                {
                    min2 = temp2;
                }
                else if (temp3 < min3 && temp3 > 0)
                {
                    min3 = temp3;
                }
            }
        }
    }
    printf("This is min value: %d %d %d\n", min, min2, min3);
    int sorted[3] = {min, min2, min3};
    int temporary = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 - i - 1; j++)
        {
            if (sorted[j] < sorted[j + 1])
            {
                temporary = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temporary;
            }
        }
    }

    printf("%d", sorted[2]);
}