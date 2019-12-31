#include <stdio.h>
#include <math.h>

typedef long long int lld;

lld trinomialSum(lld level)
{
    return pow(3, level);
}
int main(int argc, char const *argv[])
{
    lld level = 0;

    scanf("%lld", &level);
    
    printf("%lld\n", trinomialSum(level));

    return 0;
}
