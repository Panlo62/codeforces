#include <stdio.h>
#include <stdlib.h>

int thrice(int n, int *a)
{
    int *nums = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        if (++nums[a[i] - 1] == 3)
            return a[i];

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

        printf("%d\n", thrice(n, a));
    }

    return 0;
}