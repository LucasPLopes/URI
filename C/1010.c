#include <stdio.h>

struct entrada
{
    int a;
    int b;
    float c;
};

float calc(struct entrada en)
{
    float res = 0;
    res = en.b * en.c;
    return res;
}


int main(int argc, char const *argv[])
{
    struct entrada ent1, ent2;
    scanf("%d%d%f", &ent1.a, &ent1.b, &ent1.c);
    scanf("%d%d%f", &ent2.a, &ent2.b, &ent2.c);

    float soma = 0;
    soma += calc(ent1);
    soma += calc(ent2);

    printf("VALOR A PAGAR: R$ %.2f\n", soma);

    return 0;
}
