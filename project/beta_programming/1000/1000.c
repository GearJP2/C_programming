#include <stdio.h>
#include <string.h>

int main()
{

   int i = 0, j = 0;
   int count = 0;
   int index = 0;

   int n = 0;
   scanf("%d", &n);
   int a = 0;
   scanf("%d", &a);
   char chain[a + 1][n + 1];

   for (i = 0; i < a; i++)
   {
      scanf("%s", chain[i]);
   }

   for (i = 0; i < a; i++)
   {
      for (j = 0; j < n + 1; j++)
      {
         if (chain[i][j] != chain[i + 1][j])
         {
            count++;
         }
      }
      if (count >= 3)
      {
         index = i;
         break;
      }
      count = 0;
   }

   printf("%s", chain[index]);

   return 0;
}