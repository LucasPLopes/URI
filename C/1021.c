#include <stdio.h>

//data definition
enum BANK
{
    N100 = 100,
    N50 = 50,
    N10 = 10,
    N5 = 5,
    N2 = 2
};

typedef struct
{
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05, m01;
} Wallet;

typedef struct
{
    double m1, m50, m25, m10, m05, m01;
} COIN;

//signatures of functions
void printWallet(Wallet *);

//global scope
COIN coin = {1.0, .5, .25, .1, .05, .01};

int main()
{
    Wallet wallet = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    double n;

    scanf("%lf", &n);
    int notas = n;

    int moedas = (n - notas) * 100;

    if ((moedas * 1000) % 10 == 9)
    {

        moedas++;
    }

    wallet.n100 = notas / 100;

    notas = notas % 100;

    wallet.n50 = notas / 50;
    notas = notas % 50;

    wallet.n20 = notas / 20;
    notas = notas % 20;

    wallet.n10 = notas / 10;
    notas = notas % 10;

    wallet.n5 = notas / 5;
    notas = notas % 5;

    wallet.n2 = notas / 2;
    notas = notas % 2;

    wallet.m1 = notas / 1;
    notas = notas % 1;

    wallet.m50 = moedas / 50;
    moedas = moedas % 50;

    wallet.m25 = moedas / 25;
    moedas = moedas % 25;

    wallet.m10 = moedas / 10;
    moedas = moedas % 10;

    wallet.m05 = moedas / 5;
    moedas = moedas % 5;

    wallet.m01 = moedas / 1;
    printWallet(&wallet);
    return 0;
}

void printWallet(Wallet *w)
{
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", w->n100);
    printf("%d nota(s) de R$ 50.00\n", w->n50);
    printf("%d nota(s) de R$ 20.00\n", w->n20);
    printf("%d nota(s) de R$ 10.00\n", w->n10);
    printf("%d nota(s) de R$ 5.00\n", w->n5);
    printf("%d nota(s) de R$ 2.00\n", w->n2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", w->m1);
    printf("%d moeda(s) de R$ 0.50\n", w->m50);
    printf("%d moeda(s) de R$ 0.25\n", w->m25);
    printf("%d moeda(s) de R$ 0.10\n", w->m10);
    printf("%d moeda(s) de R$ 0.05\n", w->m05);
    printf("%d moeda(s) de R$ 0.01\n", w->m01);
}