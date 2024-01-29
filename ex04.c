#include <stdio.h>

int main()
{
    int n;
    int p;
    printf("scrivi un numero!\n");
    scanf("%d", &n);
    printf("scrivine un altro!\n");
    scanf("%d", &p);
    int z = n + p;
    printf("il tuo risultato è %d\n", z);
    return(0);
}