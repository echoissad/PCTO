#include <stdio.h>

int main()
{
    int x;
    int y=1;
    printf("il tuo numero è un numero primo?\n");
    scanf("%d", &x);
    while (x/y)
    {   ;
         if (x%y==0)
        {
        printf("il tuo numero non è un numero primo\n");
        } else
            {
            printf("il tuo è un numero primo\n");
            }
    
    }
    
}
