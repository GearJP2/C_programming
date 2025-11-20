#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int i = 0, j = 0;
    int count = 0;

    scanf("%d", &n);

    char marble[n];

    for (i = 0; i < n; i++)
    {
        scanf(" %c", &marble[i]);
    }

for (i = 0; i < n - 1;) {
    if (marble[i] == marble[i + 1]) {
        for (j = i; j < n - 2; j++) {
            marble[j] = marble[j + 2];
        }
        n = n - 2;
        i = 0; 
    } else {
        i++;   
    }
}

    printf("%d\n", n);

    if (n == 0)
    {
        printf("empty\n");
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {
            printf("%c", marble[i]);
        }
    }
}