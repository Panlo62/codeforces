#include <stdio.h>

int distribute(int a, int b, int c, int n)
{
    if (b > a)
        n -= b - a, a = b;
    else
        n -= a - b;

    if (c > a)
        n -= (c - a) * 2;
    else
        n -= a - c;

    return n >= 0 && n % 3 == 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, n;
        scanf("%d %d %d %d", &a, &b, &c, &n);

        printf("%s\n", distribute(a, b, c, n) ? "YES" : "NO");
    }

    return 0;
}