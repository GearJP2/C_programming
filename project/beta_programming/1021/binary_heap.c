#include <stdio.h>
#include <stdlib.h>

int pop_max(int *arr, int *len, int index) {
    if (*len == 0) return -1;

    int max = arr[0];
    index = 0;
    
    for (int i = 0; i < len; i++)
    {
        if(max < arr[i]){
            int temp = max;
            max = arr[i];
            arr[i] = temp;
        }
    }

    


    

}

int main() {
    int num = 0;
    scanf("%d", &num);

    char *order = malloc(num * sizeof(char));
    int *cost  = malloc(num * sizeof(int));

    int len = 0;
    int index = 0;

    for (int i = 0; i < num; i++) {
        scanf(" %c", &order[i]); 

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
