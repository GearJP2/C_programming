#include <stdio.h>
#include <string.h>

char *removeChar(char *sent, char target)
{
    int i = 0, j = 0;
    int len = strlen(sent);
    for (i = 0, j = 0; i < len; i++)
    {
        if (sent[i] != target)
        {
            sent[j++] = sent[i];
        }
    }
    sent[j] = '\0';
    return sent;
}

int main()
{
    int i = 0, j = 0, k = 0;
    char skibidi[100];
    char spare[100];
    char Vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    fgets(skibidi, 100, stdin);

    for (i = 0; i < sizeof(skibidi) / sizeof(skibidi[0]); i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (skibidi[i] == Vowels[j] && skibidi[i + 1] == 'p')
            {
                skibidi[i + 1] = '|';
                skibidi[i + 2] = '|';
            }
            else
            {
                    spare[i] = skibidi[i];
            }
        }
    }

    printf("%s", removeChar(spare, '|'));
}