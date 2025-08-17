#include <stdio.h>

int main(){
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\nSpongbob Squarepants");

    fclose(pF);

    return 0;
}