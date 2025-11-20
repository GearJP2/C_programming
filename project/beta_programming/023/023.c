#include <stdio.h>

struct days
{
    char *days;
    int date;
};

struct months
{
    int num_month;
    int DIM; // stand for days in month
};

int main()
{
    struct days number;
    struct days D_7[7] = {{"Thursday", 1},
                          {"Friday", 2},
                          {"Saturday", 3},
                          {"Sunday", 4},
                          {"Monday", 5},
                          {"Tuesday", 6},
                          {"Wednesday", 0}};

    struct months m_dim[12] = {{1, 31},
                               {2, 28},
                               {3, 31},
                               {4, 30},
                               {5, 31},
                               {6, 30},
                               {7, 31},
                               {8, 31},
                               {9, 30},
                               {10, 31},
                               {11, 30},
                               {12, 31}};

    number.date = 0;
    int M = 0;
    int i = 0, j = 0, k = 0;

    scanf("%d %d", &number.date, &M);

    int month_sum = 0;
    if (M > 1)
    {
        for (i = 0; i < M - 1; i++)
        {
            month_sum += m_dim[i].DIM;
        }
    }

    int result_D = (number.date + month_sum) % 7;

    for (i = 0; i < 7; i++)
    {
        if (result_D == D_7[i].date)
        {
            printf("%s", D_7[i].days);
        }
    }
}