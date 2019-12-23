#include <stdio.h>
#include <math.h>
int main()
{
    int hr = 0, mm = 0, ss = 0, x;
    scanf("%i", &x);
    if (x > 3600)
        hr = x / 3600;
    x = x - (hr * 3600);
    if (x > 60)
        mm = x / 60;
    x = x - (mm * 60);
    ss = x;

    printf("%i:%i:%i\n", hr, mm, ss);
    return 0;
}