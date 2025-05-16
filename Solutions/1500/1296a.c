#include <stdio.h>
#include <stdlib.h>

int odd_sum(int n, int *a)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
        if (a[i] & 1)
            odd++;

    if ((odd == n && n % 2 == 0) || odd == 0)
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

        printf("%s\n", odd_sum(n, a) ? "YES" : "NO");
    }
}