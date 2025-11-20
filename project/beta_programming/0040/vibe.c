#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n = 0;
    int i = 0;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    char (*a)[1100] = malloc(n * sizeof(char[1100])); 
    
    if (a == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        if (scanf("%s", a[i]) != 1) {
             break;
        }
        
        int current_len = strlen(a[i]);
        int should_print_T = 1;
        
        if (current_len == 0 || (current_len == 1 && a[i][0] == '0')) {
             should_print_T = 0;
        } else if (current_len == 1 && a[i][0] == '1') {
             should_print_T = 1;
        } else {
            char last_char = a[i][current_len - 1];
            
            if ( (last_char - '0') % 2 == 0 )
            {
                if (current_len == 1 && last_char == '2') {
                    should_print_T = 1;
                } else {
                    should_print_T = 0; 
                }
            }
        }

        if (should_print_T) {
            printf("T\n");
        } else {
            printf("F\n");
        }
    }

    free(a);
    
    return 0;
}