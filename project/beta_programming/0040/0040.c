#include <stdio.h>

// char check(int n){
//     int i = 0;
//     int prime = 0;
//     int odd = 0;   
    
//     if (n % 2 == 0)
//     {
//         odd++;
//     }
    

//     for (i = 2; i < n/2; i++)
//     {
//         if (n % i == 0)
//         {
//             prime++;
//         }
        
//     }

//     if (odd == 0 || prime == 0)
//     {
//         return 'T';
//     } else {
//         return 'F';
//     }
    
    
// }

int main()
{
    int i = 0, j = 0;
    int n = 0;
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
       if (num[i] % 2 == 0 && num[i] != 2)
       {
        printf("F\n");
       } else {
        printf("T\n");
       }
       
    }
}