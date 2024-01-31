#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("verifica che due numeri ono l'uno il multiplo dell'altro!\ninserisci il primo numero\n");
    scanf("%d", &x);
    printf("inserisci il secondo numero\n");
    scanf("%d", &y);
    if ( x%y==0)
    {
        printf("il primo è multiplo del secondo!\n");
    } else {
        printf("nope\n");
    }
    return(0);
}