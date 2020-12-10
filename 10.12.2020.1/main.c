#include <stdio.h>
#include <stdlib.h>


typedef int TIP;
typedef struct cvor_st
{
  TIP inf;
  struct cvor_st *sledeci;
} SCVOR;

void push(TIP inf, SCVOR **vrh)
{
  SCVOR *novi;
  novi = (SCVOR *)malloc(sizeof(SCVOR));
  novi->inf = inf;
  novi->sledeci = *vrh;
  *vrh = novi;
}

TIP pop(SCVOR **head)
{
    if (head == NULL)
        return -1;
    SCVOR *pomoc;
    pomoc = (SCVOR *)malloc(sizeof(SCVOR));
    pomoc = *head;
    int br= pomoc->inf;
    *head = pomoc->sledeci;
    free(pomoc);
    return br;
}

TIP top(SCVOR *vrh)
{
  if (vrh == NULL)
    return -1;
  return vrh->inf;
}

void obrisi_stek(SCVOR *vrh)
{
  if (vrh!= NULL)
  {

    obrisi_stek(vrh->sledeci);
    printf("brisemo element: %i\n", vrh->inf);
    free(vrh);
  }
}

void ispisi_stek(SCVOR *vrh)
{
  if (vrh != NULL)
  {
    printf("element: %i\n", vrh->inf);
    ispisi_stek(vrh->sledeci);
    printf("Sam sebe cekam");
  }
}

int main()
{
  SCVOR *vrh;
  TIP i, odg;
  vrh = NULL;

  do {

    printf("\n   Opcije:\n");
    printf("\t1. Smestanje na stek - push.\n");
    printf("\t2. Skidanje sa steka - pop.\n");
    printf("\t3. Pristup prvom elementu - top.\n");
    printf("\t4. Prikaz sadrzaja celog steka.\n");
    printf("\t5. Kraj.\n");
    printf("\n\t>> ");
    scanf("%d", &odg);

    switch( odg ) {
        case 1: printf("Unesite pozitivan ceo broj: ");
                scanf("%d", &i);
                push(i, &vrh);
                break;
        case 2: i = pop(&vrh);
                printf("Skinuli sa steka: %i\n", i);
                break;
        case 3: printf("Na vrhu steka je %i\n", top(vrh));
                break;
        case 4: ispisi_stek(vrh);
                break;
    }
  } while ( odg!=5 );
  obrisi_stek(vrh);
  vrh = NULL;

  return 0;
}
