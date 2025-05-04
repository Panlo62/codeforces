#include <stdio.h>

char same(int y)
{
    int o = y % 10;
    int t = (y / 10) % 10;
    int h = (y / 100) % 10;
    int th = y / 1000;

    return (o == t) || (o == h) || (o == th) || (t == h) || (t == th) || (h == th);
}

int distinct(int y)
{
    y++;
    while (same(y))
    {
        y++;
    }
    return y;
}

int main()
{
    int y;
    scanf("%d", &y);

    printf("%d", distinct(y));

    return 0;
}