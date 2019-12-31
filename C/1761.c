#include <stdio.h>
#include <math.h>

#define PI 3.141592654

typedef struct
{
    double a, b, c;
} TAD;
double heightThedolite(TAD *tad)
{
    return tan(PI * tad->a / 180) * tad->b + tad->c;
}
int main(int argc, char const *argv[])
{
    TAD tad = {0.0, 0.0, 0.0};

    while (scanf("%lf %lf %lf", &tad.a, &tad.b, &tad.c) != EOF)
    {
        printf("%.2lf\n", 5 * heightThedolite(&tad));
    }

    return 0;
}
