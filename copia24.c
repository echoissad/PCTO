#include <stdio.h>

int main()
{
    int x;
    int vcontatore=2;
    int divisori=0;
    printf("il tuo numero è un numero primo?\n");
    scanf("%d", &x);
    while (vcontatore<x)
    {   
      if (x%vcontatore==0)
      {
        divisori=divisori+1;
      }
    } vcontatore=vcontatore+1;
      if (divisori==0)
        {
        printf("il tuo numero è un numero primo\n");
        } else
            {
            printf("il tuo non è un numero primo\n");
            }
  return(0);
    
}

