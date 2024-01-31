#include <stdio.h>
#include <math.h>

int perimetro(int x, int y, int z)
{
    int somma;
    somma=x+y+z;
    return(somma);
}

int area(x, y, z)
{
    int area;
    area=sqrt((somma()/2)*(((somma()/2)-x)*((somma()/2)-y)*((somma()/2)-z)));
    return(area);
}

int main()
{
    int x;
    int y;
    int z;
    perimetro (x, y, z);
    printf("inserisci le misure dei lati di un triangolo ed ottieni il suo perimetro\n inserisci la misura del lato 1\n");
    scanf(" %d", x);
    printf("inserisci la misura del lato 2\n");
    scanf(" %d", y);
    printf("inserisci la misura del lato 3\n");
    scanf(" %d", z);
    int area=

    printf("il perimetro è: %d\n", perimetro(x, y, z));
    printf("l'area è: %d\n", );

    z=somma(x,y);
    printf("la somma è: %d\n", z);
    return(0);
}