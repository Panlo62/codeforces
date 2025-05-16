#include <stdio.h>

int screens(int x, int y)
{
    int res = y / 2 + (y & 1);

    x -= 15 * res - 4 * y;

    if (x > 0)
        res += x / 15 + (x % 15 != 0);

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        printf("%d\n", screens(x, y));
    }

    return 0;
}