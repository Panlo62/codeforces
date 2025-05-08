#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) { return *(int *)b - *(int *)a; }

char *check(int n, int f, int k, int *a)
{
    int val = a[f - 1];
    qsort(a, n, sizeof(int), comp);
    if (a[k - 1] > val)
        return "NO";
    else if (k == n || a[k] < val)
        return "YES";
    else
        return "MAYBE";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, f, k;
        scanf("%d %d %d", &n, &f, &k);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%s\n", check(n, f, k, a));
    }

    return 0;
}