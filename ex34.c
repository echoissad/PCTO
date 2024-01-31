#include <stdio.h>

int main()
{
    int x;
    int y;
    while(x>=0)
    {
        printf("scrivi le coordinate di un punto e ti dirò in che quadrante del piano cartesiano si trova:)\n inserisci il valore della x\n");
        scanf(" %d", &x);
        printf("inserisci il valore della y\n");
        scanf(" %d", &y);
        printf("il tuo punto P(%d;%d) si trova...\n", x, y);
        if (x>0&&y>0)
        {
            printf("il tuo punto si trova sul I piano\n");
        } else if (x<0&&y>0)
        {
            printf("il tuo punto si trova sul II piano\n");
        } else if (x<0&&y<0)
        {
            printf("il tuo punto si trova sul III piano\n");
        } else if (x>0&&y<0)
        {
            printf("il tuo punto si trova sul IV piano\n");
        } else
        {
            printf("il tuo punto è l'origine dei piani:)\n");
        }
    }
}