#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100]="";
    char str1[100]="";
    printf("Unesite string: ");
    scanf("%s", str);
    strcpy(str1, str);
    printf("%s", str1);
    return 0;
}
