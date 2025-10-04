#include <stdio.h>
#include <math.h>

int main()
{
    int circles = 0;
    scanf("%d", &circles);

    double result = circles;

    if (circles % 2 == 0)
    {
        printf("%.6lf", result);
    }
    else if (circles == 1)
    {
        printf("%.6lf", 2.0);
    }
    else if (circles == 3){
        printf("%.6lf", (result-1.0) + sqrt(3));
    }
    else
    {
        printf("%.6lf", result + 0.464102);
    }
}