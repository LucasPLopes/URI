#include <stdio.h>
#include <math.h>

typedef struct
{
    int a, b;
} Square;

int area(Square *square)
{
    return square->a * square->b;
}
int maxBuilds(Square *s, int areaHouse)
{
    int builds = area(s) *100;
    return pow(builds /areaHouse, .5);
}
int main(int argc, char const *argv[])
{
    Square square = {0, 0};
    int a, b, c = -1;

    while (scanf("%d", &a) && a != 0)
    {
        scanf("%d %d", &b, &c);
        square.a = a;
        square.b = b;

        printf("%d\n", maxBuilds(&square, c));
    }

    return 0;
}
