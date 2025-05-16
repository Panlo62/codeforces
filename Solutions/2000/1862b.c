#include <stdio.h>
#include <stdlib.h>

int *seq(int *n, int *b)
{
    int *a = (int *)malloc(2 * *n * sizeof(int));
    a[0] = b[0];

    int size = *n;
    *n = 1;
    for (int i = 1; i < size; i++)
    {
        a[(*n)++] = b[i];
        if (b[i] < b[i - 1])
            a[(*n)++] = b[i];
    }

    return a;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *b = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);

        int *a = seq(&n, b);
        printf("%d\n", n);
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}