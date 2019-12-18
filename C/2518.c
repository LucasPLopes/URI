#include <stdio.h>
#include <math.h>

double hip(long h, long c)
{
    double hip = 1.0;
    double ca1 = 1.0, ca2 = 1.0;
    ca1 *= h;
    ca2 *= c;

    hip = hypot(h, c);
    return hip;
}

double area(long H, long C, long L)
{
    double areaDegrau = 0.0;
    areaDegrau = hip(H, C);
    areaDegrau *= L;
    return areaDegrau;
}
double surface(long H, long C, long L, long N)
{
    return 0.0001 * N * area(H, C, L);
}

int main()
{
    double N, H, C, L, ans;
    while(scanf("%lf", &N)!= EOF){
        scanf("%lf %lf %lf", &H, &C, &L);
        printf("%.4lf\n",surface(  H,C,L,N));

    }


    return 0;
}