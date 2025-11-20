#include <stdio.h>

int main()
{
    int s = 0;
    int hours =0;
    int minutes = 0;
    int seconds = 0;
    printf("Please enter the time in seconds: ");
    scanf("%d", &s);

    if (s < 0)
    {
        printf("Invalid Input !!");
    }
    else
    {
        hours = s / 3600;
        minutes = (s % 3600) / 60;
        seconds = ((s % 3600) % 60);
        printf("The time is %d hours, %d minutes, %d second", hours, minutes, seconds);
    }
}