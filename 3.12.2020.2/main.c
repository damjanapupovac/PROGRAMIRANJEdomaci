#include <stdio.h>
#include <stdlib.h>

void insertionSort(int lista[], int n)
{
    int i, j, k;
    for (i = 1; i < n; i++)
    {
        k = lista[i];
        j = i - 1;
        while (j >= 0 && lista[j] > k)
        {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = k;
    }
}

void stampaj(int lista[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            printf("%d ", lista[i]);
        }
    printf("\n");
}

int main()
{
    int lista[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(lista) / sizeof(lista[0]);
    insertionSort(lista, n);
    stampaj(lista, n);

    return 0;
}
