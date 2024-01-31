#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("è un triangolo isoscele, equilatero o scaleno?\n");
    scanf("%d %d %d",&x, &y ,&z);
    if (x==y==z)
    {
        printf("il triangolo è equilatero\n");
    } 
    else if (x!=y&&y!=z)
    {
        printf("il triangolo è scaleno\n");
    } 
    else
    {
        printf("triangolo isoscele");
    }
    return(0);
}