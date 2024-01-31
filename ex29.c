#include <stdio.h>

void VocoCons()
{
char c;
while (c)
{
    printf("inserisci una lettera\n");
    scanf("%c", &c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            printf("la tua lettera è una vocale\n");
        } else
            {
                printf("la tua lettera è una consonante\n");
            }
        }
}

int main()
{
    VocoCons();
    printf("wow\n");
    return(0);
}