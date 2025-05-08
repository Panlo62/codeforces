#include <stdio.h>
#include <stdlib.h>

int check(int n, int *a)
{
    int l = a[0], r = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < l)
        {
            if (l - a[i] != 1)
                return 0;
            l = a[i];
        }
        else
        {
            if (a[i] - r != 1)
                return 0;
            r = a[i];
        }
    }

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

        printf("%s\n", check(n, a) ? "YES" : "NO");
    }

    return 0;
}