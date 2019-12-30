#include <stdio.h>

void max(int a, int *b)
{
    if (a > *b)
        *b = a;
}

void ler(int *val)
{
    scanf("%d", &(*val));
}
int level(int v)
{
    if (v < 10)
        return 1;
    if (v >= 10 && v < 20)
        return 2;
    return 3;
}
int main()
{
    int a, b, c, maxValue = 0;

    while (scanf("%d", &a) != EOF)
    {
        maxValue = 0;
        for (b = 0; b < a; b++)
        {
            ler(&c);
            max(c, &maxValue);
        }
        printf("%d\n", level(maxValue));
    }
    return 0;
}