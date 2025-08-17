#include <stdio.h>

main(){
    int points = 0;
    scanf("%d", &points);
        if(points >= 80) {
            rintf("A\n");
        }else if(points <= 79) {
            printf("B\n");
        }else if(points <= 69) {
            printf("C\n");
        }else if(points <= 59) {
            printf("D\n");
        }else if(points <= 50) {
            printf("F\n");
        }
}