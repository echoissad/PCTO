#include <stdio.h>

int main()
{
    printf("inserisci la tua età!\n");
    int x;
    scanf("%d", &x);
    if(x>=18)
        {
        printf("sei maggiorenne!\n");
        }
            else {
            printf("sei minorenne lol\n");
            }
    return(0);
}