#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int check(int n, int *a)
{
    qsort(a, n, sizeof(int), comp);

    for (int i = 1; i < n; i++)
        if (a[i] == a[i - 1])
            return 0;

    return 1;
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

        printf("%s\n", check(n, a) ? "YES" : "NO");
    }

    return 0;
}