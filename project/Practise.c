#include <stdio.h>

int main()
{
    char ABC[16];
    int number[5][5];
    int i = 0, j = 0, k = 0;

    scanf("%s", ABC);
    for (k = 0; ABC[k] != '\0'; k++)
    {
        for (i = 0; i < 5; i++)
        {
            if (k >= 0 && (k + 1) % 3 != 0 && ABC[k + 1] != '\0' && k <= 2)
            {
                for (j = 0; j < 4; j++)
                {
                    if (i == j && i > 0 && i < 4 && i != 2 && j != 2)
                    {
                        if ((k + 1) % 3 == 0)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf("#");
                        }
                    }
                    else if (i == j + 2 || i == j - 2)
                    {
                        if ((k + 1) % 3 == 0)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf("#");
                        }
                    }
                    else if (i == 2 && j == 2)
                    {
                        printf("%c", ABC[k]);
                    }
                    else
                    {
                        printf(".");
                    }
                }
            }
            else if (k % 3 == 0)
            {
                {
                    for (j = 1; j < 5; j++)
                    {
                        if (i == j && i > 0 && i < 4 && i != 2 && j != 2)
                        {
                            if ((k + 1) % 3 == 0)
                            {
                                printf("*");
                            }
                            else
                            {
                                printf("#");
                            }
                        }
                        else if (i == j + 2 || i == j - 2)
                        {
                            if ((k + 1) % 3 == 0)
                            {
                                printf("*");
                            }
                            else
                            {
                                printf("#");
                            }
                        }
                        else if (i == 2 && j == 2)
                        {
                            printf("%c", ABC[k]);
                        }
                        else
                        {
                            printf(".");
                        }
                    }
                }
            }
            else if ((k%3) == 1)
            {
                                {
                    for (j = 1; j < 4; j++)
                    {
                        if (i == j && i > 0 && i < 4 && i != 2 && j != 2)
                        {
                            if ((k + 1) % 3 == 0)
                            {
                                printf("*");
                            }
                            else
                            {
                                printf("#");
                            }
                        }
                        else if (i == j + 2 || i == j - 2)
                        {
                            if ((k + 1) % 3 == 0)
                            {
                                printf("*");
                            }
                            else
                            {
                                printf("#");
                            }
                        }
                        else if (i == 2 && j == 2)
                        {
                            printf("%c", ABC[k]);
                        }
                        else
                        {
                            printf(".");
                        }
                    }
                }
            }
            else
            {
                for (j = 0; j < 5; j++)
                {
                    if (i == j && i > 0 && i < 4 && i != 2 && j != 2)
                    {
                        if ((k + 1) % 3 == 0)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf("#");
                        }
                    }
                    else if (i == j + 2 || i == j - 2)
                    {
                        if ((k + 1) % 3 == 0)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf("#");
                        }
                    }
                    else if (i == 2 && j == 2)
                    {
                        printf("%c", ABC[k]);
                    }
                    else
                    {
                        printf(".");
                    }
                }
                
            }
            printf('\n')
        }
    }
}