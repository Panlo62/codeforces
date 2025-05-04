#include <stdio.h>
#include <stdlib.h>

int color(int n, int *a)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    if (sum & 1)
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

        printf("%s\n", color(n, a) ? "YES" : "NO");
    }

    return 0;
}