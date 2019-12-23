#include <stdio.h>

char *happy = ":)";
char *sad = ":(";

char *smiley(int d[])
{

    if (d[0] > d[1] && d[1] <= d[2])
        return happy;
    if (d[0] < d[1] && d[1] >= d[2])    
        return sad;
    if (d[0] < d[1] && d[1] < d[2] && d[2] - d[1] < d[1] - d[0])
        return sad;
    if (d[0] < d[1] && d[1] < d[2] && d[2] - d[1] >= d[1] - d[0])
        return happy;
    if (d[0] > d[1] && d[1] < d[2] && d[2] - d[1] < d[1] - d[0])
        return happy;
    if (d[0] > d[1] && d[1] >d[2] && d[1] -d[2] < d[0] -d[1] )//
        return happy;
    if (d[0] > d[1] && d[1] > d[2] && d[1] - d[2] >=  d[0] - d[1])
        return sad;
    if (d[0] == d[1] && d[1] < d[2])
        return happy;
    if (d[0] == d[1] && d[1] > d[2])
        return sad;
    if(d[0]== d[1] && d[1]== d[2])
        return sad;
}

int main(int argc, char const *argv[])
{
    int d[3] = {0, 0, 0};

    scanf("%d %d %d", &d[0], &d[1], &d[2]);

    printf("%s\n", smiley(d));
    return 0;
}
