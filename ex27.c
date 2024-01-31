#include <stdio.h>

int main()
{
double x;
while (x>0) 
    {
    printf("inserisci il numero di pezzi\n");
    scanf("%le", &x);
     if (x>0&&x<30)
        {
            printf("il tuo prezzo è %f\n", x*5 );
        } else if (x>=30&&x<50)
            {
                printf("il tuo prezzo è %f\n", (90*(x*5))/100);
            } else if (x>=50)
                {
                    printf("il tuo prezzo è %f\n", (85*(x*5))/100);
                } else
                    {
                        printf("errore\n");
                break;
                    }
    }
    return(0);
}
