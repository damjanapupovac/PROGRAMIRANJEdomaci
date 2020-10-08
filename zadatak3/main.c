#include <stdio.h>
#include <stdlib.h>

int BrojPojavljivanja(char str[100], char a)
{
    int brojac=0;
    int i;
    for(i=0;i<100;i++)
    {
        if(str[i]==a)
        {
            brojac++;
        }
    }
    return brojac;
}

int main()
{
    char str[100]="";
    char a;
    int brojac;
    printf("Uneti string:");
    scanf("%100s", str);
    printf("Uneti karakter:");
    scanf(" %c", &a);
    brojac=BrojPojavljivanja( str, a);
    printf("Broj pojavljivanja karaktera je %d.", brojac);
    return 0;
}
