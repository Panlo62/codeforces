#include <stdio.h>
#include <stdlib.h>

int moves(int n, int k, int *a)
{
    int max = a[0];
    for (int i = 1; i < k; i++)
        if (a[i] > max)
            max = a[i];

    return 2 * (n - max) - k + 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int *a = (int *)malloc(k * sizeof(int));
        for (int i = 0; i < k; i++)
            scanf("%d", &a[i]);

        printf("%d\n", moves(n, k, a));
    }

    return 0;
}