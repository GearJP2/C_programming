#include <stdio.h>
#include <stdlib.h>

void coor(int *x, int *y) {
    char co[10000];
    scanf("%s", co);

    int num = 0;
    int set[2] = {0, 0};
    int i, j;

    for (i = 0, j = 0; co[j] != '\0'; j++) {
        if (co[j] == ',') {
            set[i++] = num;
            num = 0;
        } else if (co[j] >= '0' && co[j] <= '9') {
            num = num * 10 + (co[j] - '0');
        }
    }
    set[i] = num;

    *x = set[0];
    *y = set[1];
}

int main() {
    int x, y;
    coor(&x, &y);
    int m;
    scanf("%d", &m);

    if (x >= m || y >= m) {
        printf("That position is not loaded.\n");
    } else {
        for (int i = m - 1; i >= 0; i--) {
            for (int j = 0; j < m; j++) {
                if (i == x && j == y) {
                    printf("*");
                } else {
                    printf("#");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
