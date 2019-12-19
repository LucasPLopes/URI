#include <stdio.h>

int transitionHours(int pl, int hr)
{
    return (pl + hr) % 24;
}
int convertToTimeZone(int hour, int time)
{
    int hours = hour + time;
    if (hours < 0)
        return 24 + hours;
    return hours;
}

int convertion(int h, int t, int f)
{
    return convertToTimeZone(transitionHours(h, t), f);
}
int main()
{
    int h, t, f;
    scanf("%d %d %d", &h, &t, &f);
    printf("%d\n", convertion(h, t, f));

    return 0;
}