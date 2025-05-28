#include <stdio.h>
#include <stdlib.h>

void beautiful(int n, int *a)
{
    if (a[0] == a[n - 1])
        printf("NO\n");
    else
    {
        printf("YES\n%d ", a[n-1]);
        for (int i = 1; i < n; i++)
            printf("%d ", a[i-1]);
        printf("\n");
    }
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

        beautiful(n, a);
    }

    return 0;
}