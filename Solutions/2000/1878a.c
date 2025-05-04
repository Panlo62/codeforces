#include <stdio.h>
#include <stdlib.h>

int segment(int n, int k, int *a)
{
    for (int i = 0; i < n; i++)
        if (a[i] == k)
            return 1;

    return 0;
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

        printf("%s\n", segment(n, k, a) ? "YES" : "NO");
    }

    return 0;
}