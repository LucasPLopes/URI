#include <stdio.h>

int main()
{
    int num, hour;
    float perHour, salary = 0;
    scanf("%i%i%f", &num, &hour, &perHour);
    salary = 1.0 * hour * perHour;

    printf("NUMBER = %i\nSALARY = U$ %.2f\n", num, salary);
    return 0;
}