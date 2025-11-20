#include <stdio.h>
#include <math.h>

int a(int base, int up){
    int i = 0;
    int result = base;
    for (i = 1; i < up; i++)
    {
        result *= base;
    }
    printf("%.0Lf\n", result);
    return result;
}

int main(){
    int n = 0;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

        for (int i = 0; i < n; i++)
    {
        a(2, num[i]);
    }
    
    
}