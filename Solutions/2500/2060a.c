#include <stdio.h>

int fib(int a[4])
{
    int x = a[0] + a[1];
    int y = a[2] - a[1];
    int z = a[3] - a[2];

    if (x != y && x != z && y != z)
        return 1;
    if (x == y && y == z)
        return 3;
    return 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[4];
        scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

        printf("%d\n", fib(a));
    }

    return 0;
}