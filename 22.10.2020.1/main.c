#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    fp = fopen("file1.txt", "r+");
    char str[100];
    int i=0;
    scanf("%s", &str);
    while (str[i] !=0)
    {
        str[i] += -32;
        printf("%s", str[i]);
    }
    fclose(fp);
    return 0;
}
