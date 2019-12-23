#include <stdio.h>
#include <string.h>

#define SIZE 15

char *owner = "Thor";

typedef struct
{
    char name[15];
    int force;
} Hero;

int canPull(Hero *, char *);

int main(int argc, char const *argv[])
{
    int times;
    Hero hero = {"", 0};
    
    scanf("%d", &times);

    for (size_t i = 0; i < times; i++)
    {
        scanf("%s %d", hero.name, &hero.force);

        if (canPull(&hero, owner) == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}

int canPull(Hero *h, char *owner)
{
    return strcmp(h->name, owner);
}