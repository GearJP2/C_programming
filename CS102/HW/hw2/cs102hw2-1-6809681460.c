#include <stdio.h>

int main()
{
    float height_m = 0;
    float height_d = 0;
    float height_mean = 0;
    float lrange = 0;
    float hrange = 0;

    printf("Enter the height of the mother (centimeters): ");
    scanf("%f", &height_m);
    printf("Enter the height of the father (centimeters): ");
    scanf("%f", &height_d);

    height_mean = (height_m + height_d) / 2;
    lrange = height_mean - 13.5;
    hrange = height_mean + 13.5;

    printf("The possible height of the child is between %.2f to %.2f centimeters.", lrange, hrange);
}