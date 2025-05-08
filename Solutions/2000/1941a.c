#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int ways(int n, int m, int k, int *b, int *c)
{
    qsort(b, n, sizeof(int), comp);
    qsort(c, m, sizeof(int), comp);

    int res = 0;

    int l = 0, r = m - 1;
    while (l < n && r >= 0)
    {
        while (r >= 0 && b[l] + c[r] > k)
            r--;
        res += r+1;
        l++;
    }

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        int *b = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);
        int *c = (int *)malloc(m * sizeof(int));
        for (int i = 0; i < m; i++)
            scanf("%d", &c[i]);

        printf("%d\n", ways(n, m, k, b, c));
    }

    return 0;
}