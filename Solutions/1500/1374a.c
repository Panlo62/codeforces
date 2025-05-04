#include <stdio.h>

int rem(int x, int y, int n)
{
    if (y > n % x)
        return n - n % x + y - x;

    return n - n % x + y;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, n;
        scanf("%d %d %d", &x, &y, &n);

        printf("%d\n", rem(x, y, n));
    }

    return 0;
}