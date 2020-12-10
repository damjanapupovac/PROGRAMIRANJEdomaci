#include <stdio.h>
#include <stdlib.h>


typedef int TIP;
typedef struct cvor_st
{
  TIP inf;
  struct cvor_st *sledeci;
} SCVOR;

struct cvor{
char podatak[100];
struct cvor* sledeci;
};
typedef struct cvor Red;

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
    SCVOR *pomocni;
    pomocni = (SCVOR *)malloc(sizeof(SCVOR));
    pomocni = *head;
    int br= pomocni->inf;
    *head = pomocni->sledeci;
    free(pomocni);
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

void Enqueue(Red** red, const char* podatak)
{
    Red* novicvor = malloc(sizeof(Red));
    strcpy(novicvor->podatak, podatak);
    novicvor->sledeci = NULL;

    if(*red==NULL)
    {
        *red = novicvor;
        return;
    }
    Red* pomocna = *red;
    while(pomocna->sledeci!=NULL)
    {
        pomocna = pomocna->sledeci;
    }
    pomocna->sledeci = novicvor;

}

void ispis(Red* red)
{
    while(red!=NULL)
    {
        printf("%s\n", red->podatak);
        red = red->sledeci;
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
  Red* red = NULL;
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
  Enqueue(&red, "Dobar");
  Enqueue(&red, "dan");
  ispis(red);
  return 0;
}
