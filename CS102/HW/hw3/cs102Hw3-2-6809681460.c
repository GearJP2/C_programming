#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0;
    int len = 0;
    int count = 0;
    int Ini = 'A';

    char s[30];

    scanf("%s", s);

    while (s[i] != '\0')
    {
        len++;
        i++;
    }

    int b[len];
    char c[len];

    for (i = 0; i < len; i++)
    {
        b[i] = 0;
        for (j = 0; j < len; j++)
        {
            if (Ini == s[j])
            {
                b[i]++;
            }
        }
        c[i] = Ini;
        Ini++;
    }

    for (i = 0; i < len; i++)
    {
        if (b[i] == 1)
        {
            count++;
        }
    }

    if (count == len)
    {
        printf("NO MISSING");
        return 0;
    }
    else
    {
        for (i = 0; i < len; i++)
        {
            if (b[i] > 1)
            {
                printf("%c", c[i]);
            }
        }

        printf("\n");

        for (i = 0; i < len; i++)
        {
            if (b[i] == 0)
            {
                printf("%c", c[i]);
            }
        }
    }
}