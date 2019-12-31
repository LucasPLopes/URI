#include <stdio.h>
#include <stdlib.h>

typedef long long int lld;
typedef struct
{
    lld a, b;
} Difference;

lld calcDifference(Difference *diff)
{
    if (diff->a > diff->b)
        return diff->a - diff->b;
    return diff->b - diff->a;
}

int main(int argc, char const *argv[])
{
    Difference diff = {0L, 0L};
    while (scanf("%lld %lld", &diff.a, &diff.b) != EOF)
    {
       
        printf("%lld\n", calcDifference(&diff));
    }

    return 0;
}
