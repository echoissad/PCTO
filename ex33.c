#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int r;
    int punti=0;
    while (x>=0)
    {
        int r=rand()%21;
        printf("scegli un numero tra 0 e 20:)\n");
        scanf(" %d", &x);
        if(x>=0&&x<=20&&x==r)
        {
            printf("hai vinto!\n");
            punti=punti+1;
            printf("numero di punti: %d\n", punti);
        } else
            {
                printf("sbagliato:)\n");
            }
    }
    return(0);
}
