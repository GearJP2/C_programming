#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int i = 0, j = 0;
    int s[n];
    int b[n];
    
    int s_;
    int b_;

    int last = 0;

    for (i = 0; i < n; i++)
    {
            scanf("%d %d", &s[i], &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
        s_ *= s[i];
        b_ += b[i];
        if (s[i] - b[i] < s_ - b_)
        {
            last = s[i] - b[i];
        } else {
            last = s_ - b_;
        }
    }
        
    }
    
    
}