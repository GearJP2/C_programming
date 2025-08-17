#include <stdio.h>

int main()
{

    int i = 0, j = 0;
    int n = 0;
    int temp = 0;

    scanf("%d", &n);

    int num[n];
    int count[n];
    int looblike = 1;
    int skibidi = 0;
    int toilet = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                looblike++;
            }
        }
        count[i] = looblike;
        looblike = 1;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (count[j] < count[j + 1] || num[j] > num[j+1])
            {
                temp = count[j];
                count[j] = count[j + 1];
                count[j + 1] = temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n - 1; i++)
    {
        if (count[0] == count[i])
        {
            skibidi++;
        }
        
    }
    
    for (i = 0; i < skibidi; i++)
    {
        printf("%d", num[i]);
    }
}