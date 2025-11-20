#include <stdio.h>

int main()
{
    int s1 = 0, s2 = 0, s3 = 0;

    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
    {
        if (s1 == s2 && s2 == s3)
        {
            printf("This is an equilateral triangles");
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("This is an isosceles triangle.");
        }
        else
        {
            printf("This is a scalene triangle.");
        }
    }
    else
    {
        printf("This is NOT a possible triangle.");
    }
}