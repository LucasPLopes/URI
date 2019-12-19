#include <stdio.h>
typedef long long int lli;

void fib(lli N)
{
    lli i, a = 0, b = 1, c = 0;
    if (N == 0)
    {
        printf("\n");
        return;
    }
    if (N == 1)
    {
        printf("0\n");
        return;
    }
    if (N >= 2)
        printf("0 1");

    for (i = 1; i <= N - 2; i++)
    {
        c = a + b;
        printf(" %lli", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    lli N;
    scanf("%lli", &N);
    fib(N);

    return 0;
}
