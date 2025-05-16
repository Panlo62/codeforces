#include <stdio.h>
#include <stdlib.h>

void perm(int n, int *a)
{
    int *cnt = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < 2 * n; i++)
        if (cnt[a[i]-1]++ == 0)
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
        int *a = (int *)malloc(2 * n * sizeof(int));
        for (int i = 0; i < 2 * n; i++)
            scanf("%d", &a[i]);

        perm(n, a);
    }

    return 0;
}