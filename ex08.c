#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("a quanti anni puoi prendere la patente nel tuo Stato?\n");
    scanf("%d", &x);
    printf("quanti anni hai?\n");
    scanf("%d", &y);
    if (y>=x)
    {
        printf("puoi guidare!\n");
    } else {
        printf("non puoi guidare:(\n");
    }
    return(0);
}