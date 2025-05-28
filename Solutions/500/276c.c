#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

long long find_max(int n, int q, int *a)
{
    int *del = (int *)calloc(n + 1, sizeof(int));

    while (q--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        del[l - 1]++;
        del[r]--;
    }

    int *b = (int *)malloc(n * sizeof(int));
    b[0] = del[0];
    for (int i = 1; i < n; i++)
        b[i] = b[i - 1] + del[i];

    qsort(a, n, sizeof(int), cmp);
    qsort(b, n, sizeof(int), cmp);

    long long res = 0;
    for (int i = 0; i < n; i++)
        res += 1LL * a[i] * b[i];

    free(del);
    free(b);

    return res;
}

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%lld", find_max(n, q, a));
    free(a);

    return 0;
}