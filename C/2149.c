#include <stdio.h>
#include <stdlib.h>

#define N 18

// baseado na solução https://github.com/malbolgee/URI/blob/master/2149.c com adaptações

typedef long long ll;

ll *makePhilSequence()
{
    ll *fib = (ll *)malloc(sizeof(ll) * N);
    int i;
    fib[1] = 0;
    fib[2] = 1;
    for (i = 3; i <= N; ++i)
        if (i % 2 == 0)
            fib[i] = fib[i - 1] * fib[i - 2];
        else
            fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}

int main(int argc, char const *argv[])
{
    int in = 0;

    ll *PhilSequence = makePhilSequence();

    while (scanf("%d", &in) != EOF)
    {
        printf("%lld\n", PhilSequence[in]);
    }

    free(PhilSequence);

    return 0;
}
