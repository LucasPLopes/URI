#include <stdio.h>

int somaRaios(int, int);

int main()
{

    int entradas = 0;
    int r1, r2;

    scanf("%d", &entradas);

    for (size_t i = 0; i < entradas; i++)
    {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", somaRaios(r1, r2));
    }

    return 0;
}
int somaRaios(int r1, int r2) { return r1 + r2; }
