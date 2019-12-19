#include <stdio.h>

int toOdd(int N)
{
    if (N % 2 == 0)
        return N + 1;
    return N;
}
int sum(int N, int steps)
{
    int sum = 0;
    for (size_t i = 0; i < steps; i++)
    {
        sum += N;
        N += 2;
    }
    return sum;
}

void print(int N)
{
    printf("%d\n", N);
}

void toAll(int N, int steps)
{
    print(sum(toOdd(N), steps));
}

int main(int argc, char const *argv[])
{
    int times, N, steps;
    scanf("%d", &times);
    for (size_t i = 0; i < times; i++)
    {
        scanf("%d %d", &N, &steps);
        toAll(N, steps);
    }

    return 0;
}
