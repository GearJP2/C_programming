#include <stdio.h>

int main()
{
    int n = 0;
    
    scanf("%d", &n);
    
    for (int i = 1; i < n; i++)
    {

        for (int j = i; j >= 1; j--)
        {
            int num_to_print = j % 5;

            if (num_to_print == 0)
            {
                printf("0");
            }
            else
            {
                printf("%d", num_to_print);
            }
        }
        printf("\n");
    }
    
    return 0;
}