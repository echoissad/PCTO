#include <stdio.h>

int main()
{
    int x;
    printf("il tuo anno è bisestile?\n");
    scanf("%d", &x);
    if ((x%4==0&&x%100!=0)||x%400==0)
    {
        printf("il tuo anno è bisestile\n");
    } else {
        printf("il tuo anno NON è bisestile\n");
    }
    return(0);
}