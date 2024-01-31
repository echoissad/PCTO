#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("a quanti anni di distanza sei nato rispetto al mood landing? inserisci la tua età!\n");
    scanf("%d",&x);
    if (x==1969)
    {
        printf("wow! sei nato nell'anno stesso del moon landing!\n");
    } 
    else if (x>1969)
    {
        y=x-1969;
        printf("sei nato %d anni dopo il moon landing!\n", y);
    } 
    else
    {
        z=1969-x;
        printf("sei nato %d anni dopo il moon landing\n", z);
    }
    return(0);
}