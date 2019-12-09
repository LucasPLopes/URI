#include <stdio.h>

struct input
{
    int a, b;
};

int calc(struct input in)
{
    return in.a + in.b;
}

int main(int argc, char const *argv[])
{
    struct input in;
    scanf("%d %d", &in.a, &in.b);

    int soma = 0;

    soma = calc(in);
    
    printf("X = %d\n", soma);

    return 0;
}
