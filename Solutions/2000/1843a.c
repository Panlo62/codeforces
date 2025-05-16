#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int color(int n, int *a)
{
    qsort(a, n, sizeof(int), comp);

    int i = 0, j = n - 1, cost = 0;
    while (i < j && a[i] != a[j])
        cost += a[j--] - a[i++];

    return cost;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%d\n", color(n, a));
    }

    return 0;
}