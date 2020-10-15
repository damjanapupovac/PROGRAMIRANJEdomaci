#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ime[10], prezime[10], brojudnevniku[30];
    printf("Unesite ime:");
    scanf("%s", &ime);
    printf("Unesite prezime:");
    scanf("%s", &prezime);
    printf("Unesite broj u dnevniku:");
    scanf("%s", &brojudnevniku);
    FILE *fp;
    fp = fopen("file1.txt", "w+");
    fprintf(fp, "%s", ime);
    fprintf(fp, " %s", prezime);
    fprintf(fp, " %s", brojudnevniku);
    fclose(fp);
    return 0;
}
