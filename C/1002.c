#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

double ler()
{
    double r;
    scanf("%lf", &r);
    return r;
}
double area(double r)
{
    return pow(r, 2.0) * PI;
}
void mensagem(double A)
{
    printf("A=%.4lf\n", A);
}

int main()
{
    double r, A = 0;
    r = ler();
    A = area(r);
    mensagem(A);

    return 0;
}