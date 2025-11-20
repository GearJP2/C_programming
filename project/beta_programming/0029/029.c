#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int jumps = y / x;

    if (y % x == 0)
    {
        printf("%d\n", jumps);
    } else if (y / x == 0)
    {
        printf("2");
    }
    else
    {
        printf("%d\n", jumps + 1);
    }

}
