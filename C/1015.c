#include <stdio.h>
#include <math.h>

struct ponto
{
    double x;
    double y;
};

double distancia(struct ponto a, struct ponto b)
{
    double res = 0;
    double x = 0, y = 0;
    x = b.x - a.x;
    y = b.y - a.y;

    x = pow(x, 2);
    y = pow(y, 2);

    res = x + y;
    res = pow(res, 0.5);
    return res;
}

int main(int argc, char const *argv[])
{

    struct ponto a, b;

    scanf("%lf%lf", &a.x, &a.y);
    scanf("%lf%lf", &b.x, &b.y);

    double res = 0;
    res = distancia(a, b);

    printf("%.4lf\n", res);

    return 0;
}
