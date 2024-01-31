#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("scegli un numero!\n");
    scanf("%d", &x);
    printf("scegline un altro!\n");
    scanf("%d", &y);
    int a = x + y;
    int b = x - y;
    int c = x * y;
    int d = x / y;
    int e = x % y;
    printf("i tuoi risultati sono:\n addizione %d,\n sottrazione %d,\n moltiplicazione %d,\n divisione %d,\n resto %d,\n", a, b, c, d, e);
    return(0);
}