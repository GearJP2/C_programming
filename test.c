#include <stdio.h>

int main()
{
    int n = 0, i = 0, j = 0;

    scanf("%d", &n);

    int dun[n];
    int count = 0;
    int temp = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &dun[i]);
    }

    for (i = 0; i < n; i++)
    {

        if (dun[i] > i)
        {
            i = dun[i] - 1;
                count++;
        } else if (dun[i] < i && i != n - 1)
        {
            temp  = dun[i] - 1;
            if(dun[temp] > temp){
                i = dun[temp] - 1;
                count++;
            }
        }
        
        else if (i != n - 1)
        {
            count++;
        }

        // printf("This is iteration %d\n", i);
    }
    printf("%d", count);
}
