#include <stdio.h>

const double N1 = 3.5;
const double N2 = 7.5;

void ler(double *n1, double *n2)
{
    scanf("%lf%lf", &(*n1), &(*n2));
}
void calc(double *n1, double *n2)
{
    *n1 *= N1; // *n1 = (*n1) * N1;
    *n2 *= N2;
}
double mediaAlt(double *n1, double *n2)
{
    return (*n1 + *n2) / (N1 + N2);
}

void imprime(double media)
{
    char *msg = "MEDIA = %.5lf\n";
    printf(msg, media);
}

int main()
{

    double n1, n2, media;

    ler(&n1, &n2);
    calc(&n1, &n2);
    media = mediaAlt(&n1, &n2);
    imprime(media);

    return 0;
}