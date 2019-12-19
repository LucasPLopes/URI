#include <stdio.h>

int isPrime(int N)
{
    int flag = 1;
    if (N == 1)
        return 0;
    for (size_t i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
void print(int N, int isPrime)
{
    if (isPrime == 0)
        printf("%d nao eh primo\n", N);
    else
        printf("%d eh primo\n", N);
}

int main(int argc, char const *argv[])
{
    int times, N;
    scanf("%d", &times);

    for (size_t i = 0; i < times; i++)
    {
        scanf("%d", &N);
        print(N, isPrime(N));
    }

    return 0;
}
