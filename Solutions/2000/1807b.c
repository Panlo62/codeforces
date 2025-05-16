#include <stdio.h>
#include <stdlib.h>

int reorder(int n, int *a)
{
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
        if (a[i] & 1)
            odd += a[i];
        else
            even += a[i];

    return even > odd;
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

        printf("%s\n", reorder(n, a) ? "YES" : "NO");
    }

    return 0;
}