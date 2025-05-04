#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    a = (int *)a;
    b = (int *)b;
    return *(int *)a - *(int *)b;
}

int sum(int n, int k, int *a, int *b)
{
    qsort(a, n, sizeof(int), comp);
    qsort(b, n, sizeof(int), comp);

    int res = 0, i = 0;
    while (i < n)
        if (k-- && a[i] < b[n - 1 - i])
            res += b[n - 1 - i++];
        else
            break;

    while (i < n)
        res += a[i++];

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int *b = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);

        printf("%d\n", sum(n, k, a, b));
    }

    return 0;
}