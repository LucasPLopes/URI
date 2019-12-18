#include <stdio.h>

int main()
{
    int a, b, c, d, diffpro;
    scanf("%i%i%i%i", &a, &b, &c, &d);
    diffpro = ((a * b) - (c * d));
    printf("DIFERENCA = %i\n", diffpro);
    return 0;
}