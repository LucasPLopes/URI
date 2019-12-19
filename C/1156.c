#include <stdio.h>
#include <math.h>

//S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

double seq()
{
    double seq = 1.0, a = 1.0, b = 1.0;

    for (size_t i = 1; i <= 39; i += 2)
    {
        a += 2.0;
        b *= 2.0;
        seq += a / b;
    }

    return seq;
}
int main()
{

    printf("%.2lf\n", seq());
    return 0;
}