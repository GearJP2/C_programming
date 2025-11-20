#include <stdio.h>
#include <string.h>

int main(){
    int a = 1;
    char A = 'B';
    char *pA = &A;
    printf("This is the value of a: %d\n", a);
    printf("This is the value of memory addres a: %p\n", &a);

    printf("*****************************************************\n");

    printf("This is the value of A: %c\n", A);
    printf("This is the value of memory addres A: %p\n", &A);
    printf("This is size of A: %d\n", sizeof(A));

    printf("*****************************************************\n");

    printf("This is the value of A: %c\n", *pA);
    // printf("This is the value2 of A: %c\n", &pA);
    printf("This is the value of memory addres A: %p\n", &pA);
    printf("This is size of A: %d\n", sizeof(pA));

    

}