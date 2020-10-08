#include <stdio.h>
#include <stdlib.h>

int najvecibr(int *niz)
{
    int najveci=0, i;
    for(i=0;i<100;i++)
    {
        if(niz[i]>=najveci)
        {
            najveci=niz[i];
        }
    }
    return najveci;
}

int main()
{
    int niz[100]={0};
    int i, najveci, n, a;
    printf("Unesite koliko clanova niza zelite(<=100):");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Unesite %d. clan niza:", i+1);
        scanf("%d", &a);
        niz[i]=a;
    }
    najveci=najvecibr(niz);
    printf("Najveci clan niza je %d.", najveci);
}
