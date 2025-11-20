#include <stdio.h>

char **subset(char *a)
{

    int len = sizeof(a);

    if (a == NULL)
    {
        return 0;
    }

    return subset(a[len - 1]);
}

int main()
{
    int i = 0;
    char *sub = {"abc"};
    char **val = subset(sub);

    for (i = 0; i < sizeof(val); i++)
    {
        printf("%s", val);
    }

    return 0;
}
