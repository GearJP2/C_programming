#include <stdio.h>

int main()
{
    long long int a[13];
int i = 0, j = 0;
int temp = 0;

for (i = 0; i < 13; i++)
{
    scanf("%lld", &a[i]);
}


for (i = 0; i < 13; i++)
{
    for (j = 0; j < 13 - i - 1; i++)
    {
        if(a[j] > a[i+1]){
            temp = a[j+1];
             a[j+1] = a[j];
             a[j] = temp;
        }
    }
}
printf("This is result:\n");
for (i = 0; i < 13; i++)
{
    printf("%lld\n", a[i]);
}

    
}
