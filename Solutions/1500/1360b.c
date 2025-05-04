#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int divide(int n, int *s)
{
    qsort(s, n, sizeof(int), comp);

    int diff = 1000;
    for (int i = 1; i < n; i++)
        if (diff > s[i] - s[i - 1])
            diff = s[i] - s[i - 1];

    return diff;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *s = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &s[i]);

        printf("%d\n", divide(n, s));
    }

    return 0;
}