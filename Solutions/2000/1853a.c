#include <stdio.h>
#include <stdlib.h>

int op(int n, int *a)
{
    int diff = a[1] - a[0];
    for (int i = 1; i < n; i++)
        if (a[i] - a[i - 1] < diff)
            diff = a[i] - a[i - 1];

    return (diff < 0) ? 0 : diff / 2 + 1;
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

        printf("%d\n", op(n, a));
    }
}