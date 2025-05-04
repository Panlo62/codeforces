#include <stdio.h>
#include <stdlib.h>

int swaps(int n, int *a)
{
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & 1) != (i & 1))
        {
            if (i & 1)
                odd++;
            else
                even++;
        }
    }

    if (even == odd)
        return even;
    return -1;
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

        printf("%d\n", swaps(n, a));
    }

    return 0;
}