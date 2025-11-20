#include <stdio.h>
#include <time.h>

int main () {

    clock_t start = clock();
    int i = 0, j = 0;
    int min = 0;
    int max = 0;

    scanf("%d %d", &min, &max);

    int count = min / 13;

    for (i = count; i <= max; i++)
    {

    }

    clock_t end = clock();

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("This is runtime: %f", time_spent);
    
}