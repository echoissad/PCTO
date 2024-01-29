#include <stdio.h>

int main()
{
    int e1;
    int e2;
    int e3;
    int e4;
    printf("età di Francesca\n");
    scanf("%d", &e1);
    printf("età di Andrea\n");
    scanf("%d", &e2);
    printf("età di Flavio\n");
    scanf("%d", &e3);
    printf("età mia:)\n");
    scanf("%d", &e4);
    int z = e1 + e2 + e3 + e4;
    printf("il tuo risultato è %d\n", z);
    return(0);
}