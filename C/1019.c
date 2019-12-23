#include <stdio.h>
#include <math.h>

typedef struct
{
    int hr, mm, ss;
} Time;

void printTime(Time*);

int main()
{
    Time time = {0,0,0};
    int x;
    scanf("%i", &x);
    if (x > 3600)
        time.hr = x / 3600;
    x = x - (time.hr * 3600);
    if (x > 60)
        time.mm = x / 60;
    x = x - (time.mm * 60);
    time.ss = x;

    printTime(&time);

    return 0;
}
void printTime(Time *t)
{
    char *output = "%i:%i:%i\n";
    printf(output, t->hr, t->mm, t->ss);
}