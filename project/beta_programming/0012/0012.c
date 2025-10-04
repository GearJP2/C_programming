#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, j = 0, k = 0, z  = 9;

    char a[20];

    scanf("%s", a);

    int len = strlen(a);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < (len * 5) - len + 1; j++)
        {
            if (i == 2 && j % 4 == 2 && k < len)
            {
                printf("%c", a[k]);
                k++;
            } else if (((i - j) % 2 == 0 || (j - i) % 2 == 0) && (j%4 != 0 || i == 2) && (j < z || j > z+4)) {
                printf("#");
            }
            else if ( (j >= z && j <= z+4) && ((i - j) % 2 == 0 || (j - i) % 2 == 0) && (j%4 != 0 || i == 2)){
                printf("*");
            }
            else if (j % 9 == 0){
                z += 9;
            }
            else
            {
                printf(".");
            }
        }
        z = 9;
        printf("\n");
    }
}