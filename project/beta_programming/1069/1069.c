#include <stdio.h>

int main(){
    int n = 0;
    int i = 0, j = 0;

    scanf("%d", &n);

    char marble[n];

    for (i = 0; i < n; i++)
    {
        scanf(" %c", &marble[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (marble[i] == marble[i+1])
        {
            for (j = i; j < n-2; j++)
            {
                marble[j] = marble[j+2];
            }
        }
        n-2;
    }

    for (i = 0; i < n; i++)
    {
        printf("%c ", marble[i]);
    }
    
    
    
    
}