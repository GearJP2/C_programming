#include <stdio.h>
#include <time.h>

int main () {

    clock_t start = clock();
    int i = 0, j = 0;
    int min = 0;
    int max = 0;

    scanf("%d %d", &min, &max);

    for (i = min; i <= max; i++)
    {
        if (min % 13 == 0)
        {
            printf("%d\n", min);
            min++;
        } else {
            min++;
        }
    }

    clock_t end = clock();

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("This is runtime: %f", time_spent);
    
}