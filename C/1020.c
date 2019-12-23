#include <stdio.h>
#include <math.h>

enum DATE{MONTH=30,YEAR=365};

typedef struct
{
    int ano, mes, dia;
} Nascimento;

void printNascimento(Nascimento *n)
{
    char *output = "%i ano(s)\n%i mes(es)\n%i dia(s)\n";
    printf(output, n->ano, n->mes, n->dia);
}
int main()
{
    Nascimento nascimento = {0, 0, 0};
    int days;

    scanf("%i", &days);

    if (days > YEAR)
        nascimento.ano = days / YEAR;
    days = days - (nascimento.ano * YEAR);
    if (days >= MONTH)
        nascimento.mes = days / MONTH;
    days = days - (nascimento.mes * MONTH);
    nascimento.dia = days;

    printNascimento(&nascimento);
    return 0;
}