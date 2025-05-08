#include <stdio.h>
#include <stdlib.h>

int perfect(int n, int *a)
{
    for (int i = 1; i < n; i++)
        if (a[i] - a[i - 1] != 5 && a[i] - a[i - 1] != 7 && a[i] - a[i - 1] != -5 && a[i] - a[i - 1] != -7)
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

        printf("%s\n", perfect(n, a) ? "YES" : "NO");
    }

    return 0;
}