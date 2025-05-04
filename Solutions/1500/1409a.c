#include <stdio.h>

int moves(int a, int b)
{
    int res = (a > b) ? a - b : b - a;

    return (res / 10) + ((res % 10) ? 1 : 0);
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