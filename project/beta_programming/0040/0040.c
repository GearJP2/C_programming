#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n = 0;
    int i = 0, j = 0, k = 0;
    scanf("%d", &n);

    char (*a)[1100] = malloc(n * sizeof(char[1100])); 
    int *count = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
        count[i] = strlen(a[i]);
    }

    i = 0;
    j = 0;
    while (i < n)
    {
        if ((a[i][count[j] - 1] - '0') % 2 == 0)
        {
            printf("F\n");
        } else if (count[j] == 1 && a[i][count[j] - 1] - '0' == 2) printf("T\n");
        else {
            printf("T\n");
        }
        i++;
        j++;
    }

    free(count);
    free(a);
 }