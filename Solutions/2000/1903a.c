#include <stdio.h>
#include <stdlib.h>

int sort(int n, int k, int *a)
{
    if (k != 1)
        return 1;

    for (int i = 1; i < n; i++)
        if (a[i - 1] > a[i])
            return 0;

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%s\n", sort(n, k, a) ? "YES" : "NO");
    }

    return 0;
}