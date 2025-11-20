#include <stdio.h>

int main()
{
    char ABC[16];
    int number[5][5];
    int i = 0, j = 0, k = 0, n = 0;

    scanf("%s", ABC);

    for (i = 0; ABC[i] != '\0'; i++)
    {
        n++;
    }

    for (k = 0; ABC[k] != '\0'; k++)
    {
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j <= (5 * n) - n; j++)
            {
                if (i == 0 && j % 2 == 0 && j % 4 != 0)
                {
                    printf("#");
                }
                else if (i == 1 && j%2 != 0)
                {
                    printf("#");
                }
                else if (i == 2 && j % 2 == 0 && j % 4 != 0)
                {
                    printf("%c", ABC[k]);
                }
                else if (i == 2 && j % 2 == 0)
                {
                    printf("#");
                }
                else if (i == 3 && j%2 != 0)
                {
                    printf("#");
                }
                else if (i == 4 && j % 2 == 0 && j % 4 != 0)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
        break;
    }
}