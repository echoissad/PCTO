#include <stdio.h>

void StampaCiao()
{
    printf("ciao\n");
}

void funzione()
{
    int x;
    int y;
    StampaCiao();
    printf("inserisci un numero:\n");
    scanf(" %d", &x);
    y=x*x;
    printf("il cubo è: %d \n", y);
}

int main()
{
    funzione();
    printf("miao\n");
    funzione();
    printf("bau\n");
    funzione();
    printf("woof\n");
    funzione();
    printf("arf\n");
    return(0);
}