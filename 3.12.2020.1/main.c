# include <stdio.h>
# include <stdlib.h>
struct clan
{
    int pod;
    struct clan *next;
};

struct clan *dodaj(struct clan *p, int n)
{
    struct clan *pomocna;
    if(p==NULL)
    {

    p=(struct clan *)malloc(sizeof(struct clan));
    if(p==NULL)
    {
        printf("Greska.\n");
        exit(0);
    }
    p->pod = n;
    p->next = NULL;
    }
    else
    {
        pomocna = p;
        while (pomocna->next != NULL) pomocna = pomocna->next;
        pomocna->next = (struct clan *)malloc(sizeof(struct clan));
        if(pomocna->next == NULL)
        {
            printf("Greska.\n");
            exit(0);
        }
        pomocna = pomocna->next;
        pomocna->pod = n;
        pomocna->next = NULL;
    }
    return (p);
}
void stampaj( struct clan *p )
{
    struct clan *pomocna;
    pomocna = p;
    if(p!= NULL)
    {
        do
        {
            printf("%d\t",pomocna->pod);
            pomocna=pomocna->next;
        }
        while (pomocna!= NULL);
            printf("\n");
    }
    else
    printf("Lista je prazna.\n");
}
int duzina( struct clan *p )
{
    int br = 0 ;
    while ( p != NULL )
    {
        br++;
        p = p->next;
    }
    return ( br ) ;
}

struct clan *obrisi( struct clan *p, int rednibr )
{
    struct clan *prethodni, *sadasnji ;
    int n=1;
    if (p == NULL )
    {
        printf("Lista je prazna. \n");
    }
    else
    {
        if ( rednibr > duzina(p) )
        {
            printf("Greska.\n");
        }
        else
        {
            prethodni = NULL;
            sadasnji = p;
            while ( n < rednibr )
            {
                prethodni = sadasnji;
                sadasnji = sadasnji->next;
               n = n+1;
            }
            if ( prethodni == NULL )
            {
                p = sadasnji->next;
                free( sadasnji );
            }
            else
            {
                prethodni->next = sadasnji->next;
                free( sadasnji );
            }
        }
    }
    return(p);
}
void main()
{
    int n,i, a;
    struct clan *head = NULL;
    printf("Unesi duzinu liste:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Unesi %d. clan liste:\n", i+1);
        scanf("%d",&a);
        head = dodaj( head, a );
    }
    printf("Uneti redni broj clana liste:\n");
    scanf ("%d",&n);
    head = obrisi(head , n );
    printf("Posle brisanja:\n");
    stampaj( head );
}
