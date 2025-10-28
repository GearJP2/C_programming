#include <stdio.h>
#include <string.h>

int main()
{
  int i = 0 , j =  0;
  char a[10000];

  fgets(a,sizeof(a),stdin);

  for(i = 0; a[i] != '\0'; i++){
    if(a[i] >= 'a' && a[i] <= 'z'){
      a[i] -= 32;
    }
  }

  printf("%s", a);
}