#include <stdio.h>

int main()
{
    double x;
    double somma=0;
    double n=0;
    while (x>=0)
    {   
    printf("inserisci un numero\n");
    scanf("%le", &x);
    if (x<0)
    {
        break;
    }
    n=n+1;
    somma=somma+x;
    printf("%f\n", somma/n );
    }

       return(0);
}