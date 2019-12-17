#include <stdio.h>

int main()
{

    double n1, n2, media;
    scanf("%lf%lf", &n1, &n2);
    n1 = n1 * 3.5;
    n2 = n2 * 7.5;
    media = (n1 + n2) / 11.0;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}