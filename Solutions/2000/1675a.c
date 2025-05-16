#include <stdio.h>

int food(int a, int b, int c, int x, int y)
{
    int rem = 0;
    if (x > a)
        rem += x - a;
    if (y > b)
        rem += y - b;
    return c >= rem;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int a, b, c, x, y;
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

        printf("%s\n", food(a, b, c, x, y) ? "YES" : "NO");
    }

    return 0;
}