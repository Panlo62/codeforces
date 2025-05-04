#include <stdio.h>

int toast(int n, int k, int l, int c, int d, int p, int nl, int np)
{
    int drink = k * l / nl;
    int salt = p / np;
    int lime = c * d;

    int min = drink;
    if (salt < min)
        min = salt;
    if (lime < min)
        min = lime;

    return min / n;
}

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    printf("%d", toast(n, k, l, c, d, p, nl, np));

    return 0;
}