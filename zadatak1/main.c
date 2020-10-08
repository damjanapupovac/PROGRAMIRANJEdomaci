#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    float a;
    printf("Unesite dimenziju matrice:");
    scanf("%d", &n);
    float matrica[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Unesite %d%d element niza:", i, j);
            scanf("%f", &a);
            matrica[i][j]=a;
        }
    }
    float tmatrica[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a=matrica[j][i];
            tmatrica[i][j]=a;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a=tmatrica[i][j];
            printf("%f ", a);
        }
    printf("\n");
    }
    return 0;
}
