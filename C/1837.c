#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Euclidean Division Theorem’
typedef struct
{
    int a;
    int b;
    int q;
    int r;
} EDT;

void mdc(EDT *edt)
{
    if (edt->a < 0)
    {
        int e = abs(edt->b);
        int f;
        int r;
        for (r = 0; r < e; r++)
        {
            f = edt->a - r;
            if (f % edt->b == 0)
                break;
        }
        edt->r = r;
        edt->q = f / edt->b;
    }
    else
    {
        edt->q = edt->a / edt->b;
        edt->r = edt->a % edt->b;
    }
}

int main()
{
    EDT edt = {0, 0, 0, 0};

    scanf("%d %d", &edt.a, &edt.b);

    mdc(&edt);

    printf("%d %d\n", edt.q, edt.r);

    return 0;
}