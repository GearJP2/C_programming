#include <stdio.h>

int main(){
    char x;
    scanf("%c", &x);
    if(x >= 'A' && x <= 90){
    printf("Upper case letter");
    } else if(x >= 97 && x <= 122){
    printf("Lower case letter");
    } else if(x >= 48 && x <= 57){
    printf("Digit");
    } else if(x = 32){
    printf("White space");}
    return 0;
}