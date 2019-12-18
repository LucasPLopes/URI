#include <stdio.h>

typedef struct
{
    int num, hour;
    float perHour;
} Employer;

float salary(Employer e)
{
    return 1.0 * e.hour * e.perHour;
}

int main()
{
    Employer e;
    float eSalary = 0;
    scanf("%i%i%f", &e.num, &e.hour, &e.perHour);
    eSalary = salary(e);

    printf("NUMBER = %i\nSALARY = U$ %.2f\n", e.num, eSalary);
    return 0;
}