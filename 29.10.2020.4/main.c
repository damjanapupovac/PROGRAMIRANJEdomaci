#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br, f;
    printf("Unesite broj: ");
    scanf("%d", &br);
    int i;
    for(i=2;;i++)
    {
      f[i]=f[i-1]+f[i-2];
      if(f[i]>=br])
      {
          break;
      }
      printf("%d", &f[i]);
    }
    return 0;
}
