#include <stdio.h>

void output(int, int);

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    output(x, y);
}

void output(int x, int y)
{

    int contador = 1, i, j, incremento = x;

    for (j = 0; j < y; j = j + incremento)
    {
        for (i = 0; i < x; i++)
        {
            printf("%d", contador);
            if (i < x - 1)
                printf(" ");
            contador++;
        }
        printf("\n");
    }
}