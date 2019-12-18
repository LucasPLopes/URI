#include <stdio.h>
/*
    Bitwise
    & AND
    | OR
    ^ XOR
    << LEFT SHIFT
    >> RIGHT SHIFT
    ~ NOT
*/

typedef struct
{
    unsigned long a, b;
} Pair;

unsigned long xor (Pair in) {
    return in.a ^ in.b;
}

    int main()
{
    Pair in;
    //scanf return 2 by the number of input that reads
    while (scanf("%lu %lu", &in.a, &in.b) == 2)
    {

        printf("%lu\n", xor(in));
    }
    return 0;
}