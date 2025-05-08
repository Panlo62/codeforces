#include <stdio.h>
#include <stdlib.h>

int max_sum(int n, int *a)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += (a[i] < 0) ? -a[i] : a[i];

    return sum;
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

        printf("%d\n", max_sum(n, a));
    }

    return 0;
}