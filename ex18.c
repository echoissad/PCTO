#include <stdio.h>

int main()
{
    int x=1;
    int y=0;
    while (x<101)
    {
        y+=x;
        x=x+1;
    }
    printf("%d\n", y);
    return(0);
}
