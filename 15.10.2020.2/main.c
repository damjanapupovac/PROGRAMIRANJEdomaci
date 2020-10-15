#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int br=0;
    printf("Unesi znak sa tastature:");
    scanf("%c", &c);
    FILE * fp;
    fp = fopen("primer.txt", "r");
    if(fp==c)
    {
        br++;
    }
    fclose(fp);
    printf("Karakter se pojavljuje %d puta.", br);
    return 0;
}
