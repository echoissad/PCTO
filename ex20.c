#include <stdio.h>

int main()
{
    int x=1;
    int y=1;
    int z;
    scanf("%d", &z);
    while (x<=z)
    {
        y=y*x;
        x=x+1;
    }
    printf("%d\n", y);
    return(0);
}
