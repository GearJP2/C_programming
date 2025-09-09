#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int n = 0;
    int count = 0;
    int remain = 0;
    int digit = 0;

    printf("Please enter your ticket number <xxxxx>: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remain += n % 10;

        n = n / 10;

        if (n == 0 && remain > 10)
        {
            printf("debug: %d\n", n);
            n = remain;
            remain = 0;
        }
    }

    printf("Your number is: %d\n", remain);
    printf("Your prediction is: ");

    switch (remain)
    {
    case 0:
        printf("Bad luck");
        break;
    case 1:
        printf("Good luck :)");
        break;
    case 2:
        printf("Will meet your soul-mate soon ^__^");
        break;
    case 3:
        printf("Should make merit");
        break;
    case 4:
        printf("Lucky in love");
        break;
    case 5:
        printf("Need mroe rest!");
        break;
    case 6:
        printf("Beware of an accident @_@");
        break;
    case 7:
        printf("Lucky in game");
        break;
    case 8:
        printf("Looking good");
        break;
    case 9:
        printf("Will get some money soon");
        break;
    }
}