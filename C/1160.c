#include <stdio.h>

#define CENTURY 101

typedef struct
{
    int population;
    double increase;
} City;

void updateCity(City *, City *);
int increaseCity(City *);
int growthCities(City *, City *);
void printTime(int);

int main(int argc, char const *argv[])
{
    City a = {0, 0},
         b = {0, 0};

    int times, count;

    scanf("%d", &times);

    for (size_t i = 0; i < times; i++)
    {
        scanf("%d %d %lf %lf", &(a.population), &(b.population), &(a.increase), &(b.increase));
        count = 0;
        for (size_t i = 0; i < CENTURY; i++)
        {
            count++;
            updateCity(&a, &b);
            // printf("%d %d\n",a.population,b.population);    teste
            if (growthCities(&a, &b) == 1 || count == CENTURY)
                break;
        }
        printTime(count);
    }

    return 0;
}

int increaseCity(City *c)
{
    return (int)c->population * (1.0 + (c->increase / 100.0));
}

void updateCity(City *a, City *b)
{
    a->population = increaseCity(a);
    b->population = increaseCity(b);
}

int growthCities(City *a, City *b)
{
    if (a->population > b->population)
        return 1;
    else
        return 0;
}

void printTime(int time)
{
    if (time < CENTURY)
        printf("%d anos.\n", time);
    else
        printf("Mais de 1 seculo.\n");
}
