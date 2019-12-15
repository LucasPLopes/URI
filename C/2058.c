#include <stdio.h>

#define MIN_TRI(x) (x - 2)

int main()
{
    int ent;

    scanf("%d", &ent);
    printf("%d\n", MIN_TRI(ent));

    return 0;
}
