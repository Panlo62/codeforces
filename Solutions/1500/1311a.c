#include <stdio.h>

int moves(int a, int b)
{
    if (a == b)
        return 0;

    if (b < a)
        return ((b & 1) == (a & 1)) ? 1 : 2;

    return ((b & 1) == (a & 1)) ? 2 : 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", moves(a, b));
    }

    return 0;
}