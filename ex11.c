#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("Scegli i valori di x, y e z!\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (x-y==y-z)
    {
        printf("i tuoi numeri sono una progressione aritmetica\n");
    } else {
        printf("non sono una successione\n");
    }
    return(0);
}