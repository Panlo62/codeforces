#include <stdio.h>
#include <stdlib.h>

int maxa(int a, int b) { return (a > b) ? a : b; }

long long moves(int n, int *a, int *b)
{
    int mina = a[0], minb = b[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mina)
            mina = a[i];
        if (b[i] < minb)
            minb = b[i];
    }

    long long res = 0;
    for (int i = 0; i < n; i++)
        res += maxa(b[i] - minb, a[i] - mina);

    return res;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int *b = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);

        printf("%lld\n", moves(n, a, b));
    }

    return 0;
}