#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0, j = 0;
    int count = 0;
    scanf("%d", &n);
    int num[n];
    int arr_count[n];
    int real_num[1000];
    int max = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    // printf("This is input: ");

    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", num[i]);
    // }

    // printf("\n");

    for (i = 0; i < n; i++)
    {
        arr_count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (num[i] == num[j])
            {
                arr_count[i]++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr_count[j] < arr_count[j + 1])
            {
                int temp = arr_count[j];
                arr_count[j] = arr_count[j + 1];
                arr_count[j + 1] = temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr_count[0] == arr_count[i])
        {
            count++;
        }
    }

    if (count > 0)
    {
        for (i = 0; i < count; i++)
        {
            for (j = 0; j < count - i - 1; j++)
            {
                if (num[j] > num[j + 1])
                {
                    int temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }

        for (i = 0; i < count; i++)
        {
            printf("%d ", num[i]);
        }
        
        
    } else {
        printf("%d\n", num[0]);
    }

    // printf("This is loob like num order: ");

    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", num[i]);
    // }
    // printf("\nThis is loob like count: ");

    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", arr_count[i]);
    // }
}