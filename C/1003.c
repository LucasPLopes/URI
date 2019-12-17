#include <stdio.h>


void ler(int *a, int *b)
{
    scanf("%i%i", &(*a), &(*b));
}
int soma(int *a, int *b)
{
    return *a + *b;
}
void imprime(int c)
{
    char * msg = "SOMA = %i\n";
    printf(msg, c);
}
int main()
{

    int a, b, c = 0;

    ler(&a, &b);

    c = soma(&a,&b);
    imprime(c);
    return 0;
}