#include <stdio.h>
#include <stdlib.h>

int fuel(int n, int x, int *a)
{
    int tank = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] - a[i - 1] > tank)
            tank = a[i] - a[i - 1];
            
    if (tank < 2 * (x - a[n - 1]))
        tank = 2 * (x - a[n - 1]);

    return tank;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%d\n", fuel(n, x, a));
    }

    return 0;
}