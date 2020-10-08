#include <stdio.h>
#include <stdlib.h>

int jednaki(char *s1, char *s2)
{
    if(*s1==*s2)
    {
        return 0;
    }
    return 1;
}

int main()
{
    char a[20]="";
    char b[20]="";
    int i;
    printf("Uneti prvi string:");
    scanf("%20s", a);
    printf("Uneti drugi string:");
    scanf("%20s", b);
    int r=0;
    for(i=0;i<20;i++)
    {

        if(jednaki((a+i), (b+i))==1)
        {
            r=1;
            break;
        }

    }
    if(r==0)
    {
        printf("Stringovi su jednaki.");
    }
    else
    {
        printf("Stringovi nisu jednaki.");
    }
    return 0;
}
