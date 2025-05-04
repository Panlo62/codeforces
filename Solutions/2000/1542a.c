#include <stdio.h>
#include <stdlib.h>

int odd_set(int n, int *a)
{
    int odd = 0;
    for (int i = 0; i < 2 * n; i++)
        if (a[i] & 1)
            odd++;

    return odd == n;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(2 * n * sizeof(int));
        for (int i = 0; i < 2 * n; i++)
            scanf("%d", &a[i]);

        printf("%s\n", odd_set(n, a) ? "YES" : "NO");
    }

    return 0;
}