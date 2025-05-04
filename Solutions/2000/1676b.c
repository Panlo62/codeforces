#include <stdio.h>
#include <stdlib.h>

int eat(int n, int *a)
{
    int cnt = 0, min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] >= min)
            cnt += a[i] - min;
        else
            cnt += (min - a[i]) * i, min = a[i];

    return cnt;
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

        printf("%d\n", eat(n, a));
    }

    return 0;
}