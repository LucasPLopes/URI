#include <stdio.h>

double increase(double a, double b)
{
    double c = 0;
    c = b / a - 1.0;
    c *= 100.0;
    return c;
}
int main(int argc, char const *argv[])
{
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = increase(a, b);
    printf("%.2lf%%\n", c);
    return 0;
}
