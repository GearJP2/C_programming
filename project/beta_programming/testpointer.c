#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char* arr[] = {"Skibidi", "toilet", "green"};

    strcpy(arr[0], "a");

    printf("%s", arr[0]);
}