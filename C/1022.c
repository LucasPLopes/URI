#include <stdio.h>
#define VSIZE 25

const int PRIMES[25] =
    {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

typedef struct
{
    long a, b;
} TAD;

TAD plus(TAD X, TAD Y)
{
    TAD Z;
    Z.a = (X.a * Y.b + X.b * Y.a);
    Z.b = X.b * Y.b;

    return Z;
}

TAD minus(TAD X, TAD Y)
{
    TAD Z;
    Z.a = (X.a * Y.b - X.b * Y.a);
    Z.b = X.b * Y.b;
    return Z;
}
TAD mult(TAD X, TAD Y)
{
    TAD Z;
    Z.a = X.a * Y.a;
    Z.b = X.b * Y.b;

    return Z;
}
TAD div(TAD X, TAD Y)
{
    TAD Z;
    Z.a = X.a * Y.b;
    Z.b = X.b * Y.a;
    return Z;
}

int canSimplifyTAD(TAD t, int value)
{
    if (t.a % value == 0 && t.b % value == 0) // dividible
        return 1;
    if (t.a < value || t.b < value) // tad < value
        return -1;

    return 0;
}
void simplifyTad(TAD *T, int value)
{
    (*T).a /= value;
    (*T).b /= value;
}
void simplification(TAD *t)
{
    int flag = 0;
    for (size_t i = 0; i < VSIZE;)
    {
        flag = 0;
        flag = canSimplifyTAD(*t, PRIMES[i]);

        if (flag == 1)
        {
            simplifyTad(t, PRIMES[i]);
        }
        else if (flag == -1)
            break;

        flag = canSimplifyTAD(*t, PRIMES[i]);

        if (flag != 1)
            i++;
    }
}
void printTAD(TAD p, TAD n)
{
    printf("%ld/%ld = %ld/%ld\n", p.a, p.b, n.a, n.b);
}

int main()
{
    int times;
    char op[2];

    scanf("%d", &times);

    for (size_t i = 0; i < times; i++)
    {
        TAD x, y, previous, next;
        scanf("%ld / %ld %s %ld / %ld",
              &x.a, &x.b, op, &y.a, &y.b);
        switch (op[0])
        {
        case '+':
            previous = plus(x, y);
            next = plus(x, y);
            simplification(&next);
            printTAD(previous, next);
            break;
        case '-':
            previous = minus(x, y);
            next = minus(x, y);
            simplification(&next);
            printTAD(previous, next);
            break;
        case '*':
            previous = mult(x, y);
            next = mult(x, y);
            simplification(&next);
            printTAD(previous, next);
            break;
        case '/':
            previous = div(x, y);
            next = div(x, y);
            simplification(&next);
            printTAD(previous, next);
            break;

        default:
            break;
        }
    }

    return 0;
}