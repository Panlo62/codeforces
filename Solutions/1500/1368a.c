#include <stdio.h>

int op(int a, int b, int n)
{
    int res = 0;
    if (a < b)
        a += b, res++;
    while (a <= n && b <= n)
    {
        a += b;
        b = a - b;
        res++;
    }
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);

        printf("%d\n", op(a, b, n));
    }

    return 0;
}