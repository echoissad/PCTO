#include <stdio.h>

int main()
{
    int x=6;
    int y=1;
    while (x>0)
    {
        y=y*x;
        x=x-1;
    }
    printf("%d\n", y);
    return(0);
}
