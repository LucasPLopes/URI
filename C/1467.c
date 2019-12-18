#include <stdio.h>

typedef struct
{
    int A, B, C;
} Group;

char winner(Group g)
{

    if (g.A == 0 && g.B == 0 && g.C == 0)
        return '*';
    if (g.A == 0 && g.B == 0 && g.C == 1)
        return 'C';
    if (g.A == 0 && g.B == 1 && g.C == 0)
        return 'B';
    if (g.A == 0 && g.B == 1 && g.C == 1)
        return 'A';
    if (g.A == 1 && g.B == 0 && g.C == 0)
        return 'A';
    if (g.A == 1 && g.B == 0 && g.C == 1)
        return 'B';
    if (g.A == 1 && g.B == 1 && g.C == 0)
        return 'C';
    if (g.A == 1 && g.B == 1 && g.C == 1)
        return '*';
}

int main()
{
    Group g;
    while (scanf("%d %d %d", &g.A, &g.B, &g.C) == 3)
    {
        printf("%c\n", winner(g));
    }
    return 0;
}