#include <stdio.h>

int main(){
    int i = 0, j = 0;
    int number[10];
    int sum = 0;
    int ans[7];
    int count = 0;

    for ( i = 0; i < 10; i++){
        scanf("%d", &number[i]);
    }


    do {
        i++;
        count++;
        if(count == 7){
            i-6;
        }
    }
    while (sum != 100);
    

    // for(i = 0; i < 7; i++){
    //     sum += number[i];
    // }
}