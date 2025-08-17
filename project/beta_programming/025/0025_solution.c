#include<stdio.h>
#include<string.h>
char a[200],b[201],op;
int main(int argc, char const *argv[])
{
    scanf("%s %c %s",a,&op,b);
    int n = strlen(a), m = strlen(b);
    if (n<m) {
        int temp=n;
        n=m;
        m=temp;
    } 
    if (op=='*'){
        printf("1");
        for (int i=0;i<n+m-2;i++){
            printf("0");
        }
    }
    else{
        if (n==m){
            printf("2");
            for (int i=1;i<n;i++) printf("0");
        }
        else {
            printf("1");
            for (int i=1;i<n;i++){
                if (n-m == i) printf("1");
                else printf("0");
            }
        }
    }
    return 0;
}