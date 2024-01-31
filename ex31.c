#include <stdio.h>

void addizione()
{
    int x;
    int y;
    printf("inserisci i due numeri di cui vuoi fare la somma!\n");
    scanf(" %d", &x);
    printf("inserisci il secondo!\n");
    scanf(" %d", &y);
    printf("il tuo risultato è %f", x+y);
}

void sottrazione()
{
    int x;
    int y;
    printf("inserisci i due numeri di cui vuoi fare la differenza!\n");
    scanf(" %d", &x);
    printf("inserisci il secondo!\n");
    scanf(" %d", &y);
    printf("il tuo risultato è %f", x-y);
}

void moltiplicazione()
{
    int x;
    int y;
    printf("inserisci i due numeri di cui vuoi fare il prodotto!\n");
    scanf(" %d", &x);
    printf("inserisci il secondo!\n");
    scanf(" %d", &y);
    printf("il tuo risultato è %f", x*y);
}

void divisione()
{
    int x;
    int y;
    printf("inserisci i due numeri di cui vuoi fare il quoziente!\n");
    scanf(" %d", &x);
    printf("inserisci il secondo!\n");
    scanf(" %d", &y);
    printf("il tuo risultato è %f", x/y);
}



int main()
{
    addizione();
    sottrazione();
    moltiplicazione();
    divisione();
    return(0);
}