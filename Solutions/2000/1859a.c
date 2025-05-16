#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

void make(int n, int *a)
{
    qsort(a, n, sizeof(int), comp);
    if (a[n - 1] == a[0])
    {
        printf("-1\n");
        return;
    }

    int b = 1;
    while (a[b] == a[0])
        b++;

    printf("%d %d\n", b, n - b);
    for (int i = 0; i < b; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (int i = b; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
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

        make(n, a);
    }

    return 0;
}