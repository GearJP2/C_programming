#include <stdio.h>

int main(){
    int i = 0, j = 0;
    int n = 0;
    scanf("%d", &n);

    int top = -1;

    char marbles[n];
    char stack[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c", &marbles[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        if (top >= 0 && stack[top] == marbles[top])
        {
            top--;
            continue;
        } else {
            stack[top++] = marbles[top];
        }
        
    }
    
}