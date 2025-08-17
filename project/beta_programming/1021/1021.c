#include <stdio.h>
#include <stdlib.h>

int find_max(int *arr, int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int *del(int *arr, int *len, int val)
{
    int i = 0, j = 0;
    for (i = 0; i < *len; i++)
    {
        if (arr[i] == val)
        {
            for (int j = i; j < *len - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*len)--;
            break;
        }
    }
}

int main()
{
    int num = 0;
    scanf("%d", &num);

    char *order = malloc(num * sizeof(char));
    int *cost = malloc(num * sizeof(int));
    int j = 0;   // number of P's so far
    int len = 0; // current number of elements in cost
    int ans = 0;

    for (int i = 0; i < num; i++)
    {
        scanf(" %c", &order[i]); // skip whitespace
        if (order[i] == 'P')
        {
            scanf("%d", &cost[len++]);
        }
        else if (order[i] == 'Q')
        {
            if (len != 0)
            {
                ans = find_max(cost, len);
                printf("%d\n", ans);
                cost = del(cost, &len, ans);
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    free(order);
    free(cost);
    return 0;
}
