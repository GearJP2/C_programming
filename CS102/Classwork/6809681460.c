#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int sum = 8;


    printf("This all possible cases: \n");

    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (i + j > sum){
                printf("%d %d\n", i, j);
            }
        }
    }
}