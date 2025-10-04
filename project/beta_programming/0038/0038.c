#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, k = 0, n = 0;
    scanf("%d", &n);

    char **mook = (char **)malloc(n * sizeof(char *));
    char **temp = (char **)malloc(n * sizeof(char *));
    if (mook == NULL || temp == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        mook[i] = (char *)malloc(30);
        if (mook[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            for (k = 0; k < i; k++)
            {
                free(mook[k]);
            }
            free(mook);
            return 1;
        }
        scanf("%s", mook[i]);
    }

    int unique_count = 0;

    for (i = 0; i < n; i++)
    {
        int is_duplicate = 0;
        for (j = 0; j < unique_count; j++)
        {
            if (strcmp(mook[i], temp[j]) == 0)
            {
                is_duplicate = 1;
                break;
            }
            
        }

        if (!is_duplicate)
        {
            temp[unique_count] = mook[i];
            unique_count++;
        } else {
            free(mook[i]);
        }
    }

    free(mook);

    for (i = 0; i < unique_count; i++)
    {
        for (j = 0; j < unique_count - i - 1; j++)
        {
            if (strcmp(temp[j], temp[j + 1]) > 0)
            {
                char *tttt = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = tttt;
            }
        }
    }

    for (i = 0; i < unique_count; i++)
    {
        printf("%s\n", temp[i]);
    }
    free(temp);
}