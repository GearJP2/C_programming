#include <stdio.h>

int main() {
    int n = 0, i = 0, j = 0;
    scanf("%d", &n);
    int len = n*n;

    int a[n][n];
    int b[len - 1];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i == j){
                sum_diagonal += a[i][j];
            }
        }
    }
    
}