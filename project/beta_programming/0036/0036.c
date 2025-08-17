#include <stdio.h>

int combination(int n, int r)
{
    int i = 0, j = 0;
    int re_n = 1;
    int re_r = r;
    int temp = n - r;
    int re_n_r = 1;
    int real_re = 0;

    while (n > 0)
    {
        re_n *= n;

        n--;
    }


    if (temp == 0)
    {
        re_n_r = 1;
    }
    else
    {

        while (temp > 0)
        {
            re_n_r *= temp;
            temp--;
        }
    }

    real_re = re_n / (re_n_r * r);

    return real_re;
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    int result = combination(num, 2);
    if (num == 1 || num == 2)
    {
        printf("2");
    }
    else
    {

        printf("%d", result);
    }
}


