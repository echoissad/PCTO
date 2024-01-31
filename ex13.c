#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("può essere un triangolo? inserisci i valori dei tre lati\n");
    scanf("%d %d %d",&x , &y, &z);
    if (x+y>z&&y+z>x&&x+z>y)
    {
        printf("ci puoi costruire un triangolo\n");
    } else {
        printf("non ci puoi costruire un triangolo\n");
    }
    return(0);
}