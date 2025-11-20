#include <stdio.h>

// Question 5 of Homework 3 (CS102 HW3 1/2567)
// Your program will not successfully be compiled and run properly until readSquare and findMagicNumber functions are defined correctly.
// Let's define readSquare and findMagicNumber functions here !

void readSquare(int arr[8][8], int N)
{
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int findMagicNumber(int arr[8][8], int N)
{
    int i = 0, j = 0, y = 0;
    int b[(N * 2) + 2];
    int isDup = 0;
       for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            b[y] += arr[i][j];
        }
        y++;
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            b[y] += arr[j][i];
        }
        y++;
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j)
            {
                b[y] += arr[j][i];
            }
        }
    }
    y++;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i + j == N - 1)
            {
                b[y] += arr[j][i];
            }
        }
    }

    for (i = 0; i < (N * 2) + 2; i++)
    {
        if (b[0] != b[i])
        {
            isDup++;
        }
    }

    if (isDup)
    {
        return -1;
    } else {
        return b[0];
    }
}

int main()
{

    int arr[8][8];
    int N;

    scanf("%d", &N);
    readSquare(arr, N);

    int magicNumber = findMagicNumber(arr, N);

    if (magicNumber == -1)
    {
        printf("Your square is NOT a magic square.");
    }
    else
    {
        printf("Your square is a magic square!! with the magic constant = %d.", magicNumber);
    }

    return 0;
}