#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void plus(char *num1, char *num2, char* result);
void multiply(char *num1, char *num2, char* result);

int main()
{

    char num1[200];
    char operator;
    char num2[201];
    char result[200];

    scanf("%s", num1);
    scanf(" %c", &operator);
    scanf("%s", num2);

    if (operator == '+'){
        plus(num1, num2, result);
        printf("%s", result);
    } else {
        multiply(num1, num2, result);
        printf("%s", result);
    }

}

void plus(char *num1, char *num2, char* result)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = (len1 > len2) ? len1 : len2;
    int k = 0;
    int carry = 0;

    char* temp_result = (char*) malloc (max_len + 1);

    int i = len1 - 1;
    int j = len2 - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        i--;
        j--;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        temp_result[k] = (sum % 10) + '0';
        k++;
    }
    temp_result[k] = '\0';

    int end = k - 1;
    int start = 0;

    while (start < end)
    {
        char temp = temp_result[start];
        temp_result[start] = temp_result[end];
        temp_result[end] = temp;
        start++;
        end--;
    }
    strcpy(result, temp_result);
    free(temp_result);
}

void multiply(char *num1, char *num2, char* result)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = len1+len2;
    int k = 0;
    int skibidi = 0;
    int carry = 0;

    char* temp_result = (char*) malloc (max_len + 1);
    char t_r[len2][max_len];

    int i = len1 - 1;
    int j = len2 - 1;

    while (j >= 0 || carry)
    {
        while (i >= 0 || carry)
        {
        int digit1 = (i >= 0) ? (num1[i--] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int mul_carry = (digit1 * digit2) % 10;
        int sum = mul_carry + carry;
        carry = (digit1 * digit2)/10;
        t_r[skibidi][k++] = (sum % 10) + '0';
        }
        skibidi++;
        j--;
        i = len1 - 1;
    }

    temp_result[k] = '\0';


    for (i = 0; i < k; i++)
    {
        plus(temp_result,t_r[k], result);
    }
    

    int end = k - 1;
    int start = 0;

    while (start < end)
    {
        char temp = temp_result[start];
        temp_result[start] = temp_result[end];
        temp_result[end] = temp;
        start++;
        end--;
    }
    strcpy(result, temp_result);
    free(temp_result);
}