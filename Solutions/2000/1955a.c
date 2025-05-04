#include <stdio.h>

int buy(int n, int a, int b)
{
    if (2 * a > b)
        return n / 2 * b + n % 2 * a;
    else
        return n * a;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        printf("%d\n", buy(n, a, b));
    }

    return 0;
}