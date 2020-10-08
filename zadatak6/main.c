#include <stdio.h>
#include <stdlib.h>

int kreiranje(float *mat, int *n, int *m)
{
    float a;
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Unesite %d%d element niza:", i, j);
            scanf("%f", &a);
            *(mat+i*n+j) = a;
        }
    }
    return mat;
}

int ispis(float *mat, int *n, int *m)
{
    int a;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a=mat[i][j];
            printf("%d ", a);
        }
    printf("\n");
    }
    return mat;
}

void sabiranje(float *mat1, float *mat2, int *n, int *m)
{
    int i, j, a;
    float mat[100][100]={0};
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=mat1[i][j]+mat2[i][j];
            a=mat[i][j];
            printf("%f", a);
        }
        printf("\n");
    }
}

int main()
{
    int n, m;
    printf("Unesite duzinu matrica:");
    scanf("%d", &n);
    printf("Unesite sirinu matrica:");
    scanf("%d", &m);
    float mat1[100][100]={0};
    float mat2[100][100]={0};
    mat1=kreiranje(mat1, n, m);
    mat1=ispis(mat1, n, m);
    mat2=kreiranje(mat2, n, m);
    mat2=ispis(mat2, n, m);
    sabiranje(mat1, mat2, n, m);
    return 0;
}
