#include <stdio.h>

typedef struct
{
    int a, b, c, d;
} Data;

int DIFERENCA(Data d)
{
    return ((d.a * d.b) - (d.c * d.d));
}
int main()
{
    Data d;
    char *msg = "DIFERENCA = %i\n";
    scanf("%i%i%i%i", &d.a, &d.b, &d.c, &d.d);

    printf(msg, DIFERENCA(d));
    return 0;
}