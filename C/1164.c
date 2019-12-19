#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPerfect(int N)
{
    int sum = 0;
    for (int i = 1; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            sum += i;
        }
    }
    return (N == sum ? 1 : 0);
}
void msg(int N, int isPerfect)
{
    if (isPerfect == 1)
        printf("%i eh perfeito\n", N);
    else
        printf("%i nao eh perfeito\n", N);
}

int main(int argc, char const *argv[])
{
    int times, N, is;
    scanf("%i", &times);

    for (size_t i = 0; i < times; i++)
    {
        scanf("%i", &N);
        is = 0;
        is = isPerfect(N);
        msg(N, is);
    }

    return 0;
}
