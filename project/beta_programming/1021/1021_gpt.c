#include <stdio.h>
#include <stdlib.h>

int pop_max(int *arr, int *len) {
    if (*len == 0) return -1;

    int max = arr[0];
    int idx = 0;
    for (int i = 1; i < *len; i++) {
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }

    for (int j = idx; j < *len - 1; j++) {
        arr[j] = arr[j + 1];
    }

    (*len)--;
    return max;
}

int main() {
    int num = 0;
    scanf("%d", &num);

    char *order = malloc(num * sizeof(char));
    int *cost  = malloc(num * sizeof(int));

    int len = 0; // number of elements in cost

    for (int i = 0; i < num; i++) {
        scanf(" %c", &order[i]); // skip whitespace

        if (order[i] == 'P') {
            scanf("%d", &cost[len++]);
        } 
        else if (order[i] == 'Q') {
            int ans = pop_max(cost, &len);
            printf("%d\n", ans);
        }
    }

    free(order);
    free(cost);
    return 0;
}
