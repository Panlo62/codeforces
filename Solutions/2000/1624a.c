#include <stdio.h>
#include <stdlib.h>

int op(int n, int *a)
{
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];

    return max - min;
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

    return 0;
}