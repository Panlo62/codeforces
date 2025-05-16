#include <stdio.h>

int moves(int a, int b, int c)
{
    int diff = (a > b) ? a - b : b - a;
    diff = diff / 2 + diff % 2;

    return diff / c + (diff % c != 0);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%d\n", moves(a, b, c));
    }

    return 0;
}