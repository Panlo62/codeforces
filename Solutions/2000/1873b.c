#include <stdio.h>
#include <stdlib.h>

int max_prod(int n, int *a)
{
    int zero = 0, prod = 1, min = 9;
    for (int i = 0; i < n; i++)
        if (a[i])
        {
            prod *= a[i];
            if (min > a[i])
                min = a[i];
        }
        else
            zero++;

    if (zero > 1)
        return 0;

    if (zero)
        return prod;

    return prod + prod / min;
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

        printf("%d\n", max_prod(n, a));
    }

    return 0;
}