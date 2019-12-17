#include <stdio.h>

typedef struct
{
    double n1, n2, n3;
} Data;

void upData(Data *data)
{
    (*data).n1 *= 2.0;
    (*data).n2 *= 3.0;
    (*data).n3 *= 5.0;
}

void ler(Data *data)
{
    scanf("%lf%lf%lf", &(data->n1), &data->n2, &data->n3);
}

double media(Data data)
{
    return (data.n1 + data.n2 + data.n3) / 10.0;
}

int main()
{
    Data aluno;
    double media_aluno;

    ler(&aluno);
    upData(&aluno);

    media_aluno = media(aluno);
    printf("MEDIA = %.1lf\n", media_aluno);

    return 0;
}