#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>0){
        int e;
        scanf("%d",&e);
        printf("%.0Lf\n",powl(2,e));
        n--;
    }
}