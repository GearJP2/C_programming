#include <stdio.h>

int main(){
    int s = 0;

    int hours = s/3600;
    int minutes = (s%3600)/60;
    int seconds = ((s%3600)%60);

    printf("The time is %d hours, %d minutes, %d second", hours, minutes, seconds);
    
}