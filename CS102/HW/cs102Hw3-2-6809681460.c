#include <stdio.h>

int main(){
    char a[30];
    scanf("%s", a);
    int i = 0 , j = 0;
    int len = 0;
    int mark = 0;

    for(i = 0; a[i] != '\0'; i++){
        len++;
    }

   int max = 'A' + len;
   int base = 'A';
   char num[len];

   for(i = base; i <= max; i++){
        if(a[i] != i){
            num[j] = i;
            mark++;
        } else {
            continue;
        }
    }
    
    if(mark == 0){
        printf("NO MISSING");
    } else {
        printf("%s", num);
    }
}