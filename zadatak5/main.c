#include <stdio.h>
#include <stdlib.h>

void brojevi_deljivi_sa_3 (int *ulaz, int *izlaz)
{
    int i;
    for(i=0;i<100;i++)
    {
        if(ulaz[i]%3==0)
        {
            izlaz[i]=ulaz[i];
        }
    }
}

int main()
{
    int niz[100]={0};
    int niz2[100]={0};
    int i, n, a;
    printf("Unesite koliko clanova niza zelite(<=100):");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Unesite %d. clan niza:", i+1);
        scanf("%d", &a);
        niz[i]=a;
    }
    brojevi_deljivi_sa_3(niz, niz2);
    for(i=0;i<n;i++)
    {
        printf("%d", niz2[i]);
    }
    return 0;
}
