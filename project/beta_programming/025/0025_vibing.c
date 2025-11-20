#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void plus(char *num1, char *num2, char* result);
void multiply(char *num1, char *num2, char* result);

int main()
{
    char num1[200], num2[200], result[500] = {0};
    char operator;

    scanf("%s", num1);
    scanf(" %c", &operator);
    scanf("%s", num2);

    if (operator == '+') {
        plus(num1, num2, result);
    } else if (operator == '*') {
        multiply(num1, num2, result);
    }

    printf("%s\n", result);
}

void plus(char *num1, char *num2, char* result)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = (len1 > len2) ? len1 : len2;
    int carry = 0, k = 0;

    char* temp = malloc(max_len + 2); // extra space
    int i = len1 - 1, j = len2 - 1;

    while (i >= 0 || j >= 0 || carry) {
        int d1 = (i >= 0) ? num1[i--] - '0' : 0;
        int d2 = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        temp[k++] = (sum % 10) + '0';
    }

    temp[k] = '\0';

    // reverse
    for (int i = 0; i < k / 2; i++) {
        char t = temp[i];
        temp[i] = temp[k - i - 1];
        temp[k - i - 1] = t;
    }

    strcpy(result, temp);
    free(temp);
}

void multiply(char *num1, char *num2, char* result)
{
    int len1 = strlen(num1), len2 = strlen(num2);
    int* prod = calloc(len1 + len2, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        int d1 = num1[i] - '0';
        for (int j = len2 - 1; j >= 0; j--) {
            int d2 = num2[j] - '0';
            int mul = d1 * d2;
            int p1 = i + j, p2 = i + j + 1;

            int sum = mul + prod[p2];
            prod[p2] = sum % 10;
            prod[p1] += sum / 10;
        }
    }

    // convert to string
    int i = 0, k = 0;
    while (i < len1 + len2 && prod[i] == 0) i++; // skip leading zeros
    if (i == len1 + len2) result[k++] = '0';
    else {
        while (i < len1 + len2)
            result[k++] = prod[i++] + '0';
    }

    result[k] = '\0';
    free(prod);
}
