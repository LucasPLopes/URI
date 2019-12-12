#include <stdio.h>

void output();

int main()
{
    output();
}

void output()
{
    float a = 1, b = 2, c = 3, bonus = 0;
    int contador = 0,i ;
    for (i = 0; i <= 20;i = bonus * 10)
    {

        if (contador % 5 != 0 )
        {
            printf("I=%.1f J=%.1f\n", bonus, a + bonus);
            printf("I=%.1f J=%.1f\n", bonus, b + bonus);
            printf("I=%.1f J=%.1f\n", bonus, c + bonus);
        }
        else
        {
            printf("I=%.0f J=%.0f\n", bonus, a + bonus);
            printf("I=%.0f J=%.0f\n", bonus, b + bonus);
            printf("I=%.0f J=%.0f\n", bonus, c + bonus);
        }

        bonus += .2;
        
        contador++;
    }
}