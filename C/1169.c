#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BASE 12000

typedef long long lld;

lld quantityOfGrains(int q)
{
    lld result;
    result = (lld) (pow(2, q)/BASE);
    return result;
}

int main()
{
    int times;
    int houses;
    scanf("%d", &times);

    for (size_t i = 0; i < times; i++)
    {
        scanf("%d", &houses);
        printf("%lld kg\n", quantityOfGrains(houses));
    }

    return 0;
}