#include <stdio.h>

int moves(int n, int k, int p)
{
    if (k < 0)
        k = -k;

    if (n * p >= k)
        return k / p + (k % p != 0);

    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);

        printf("%d\n", moves(n, k, p));
    }

    return 0;
}