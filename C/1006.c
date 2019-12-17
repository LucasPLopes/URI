#include <stdio.h>

int main()
{

    double n1, n2, n3, media;
    scanf("%lf%lf%lf", &n1, &n2, &n3);
    n1 = n1 * 2.0;
    n2 = n2 * 3.0;
    n3 = n3 * 5.0;
    media = (n1 + n2 + n3) / 10.0;
    printf("MEDIA = %.1lf\n", media);

    return 0;
}