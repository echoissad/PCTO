#include <stdio.h>

int main()
{
    double x;
    double a;
    double b;

    printf("inserisci una temperatura in gradi Celsius\n");
    scanf("%le", &x);
    if ((-273.15)<x)
    {
        a = (9/5)*x+32;
        b = x+273.15;
        printf("la tua temperatura in Fahrenheit è %f\n", a);
        printf("la tua temperatura in Kelvin è %f\n", b);
    } else {
        printf("error\n");
    }
    return(0);
}