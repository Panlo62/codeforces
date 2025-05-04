#include <stdio.h>
#include <stdlib.h>

char *check(int n, int p, int *x, int q, int *y)
{
    int *unique = (int *)calloc(n + 1, sizeof(int));

    int cnt = 0;

    for (int i = 0; i < p; i++)
        if (unique[x[i]]++ == 0)
            cnt++;

    for (int i = 0; i < q; i++)
        if (unique[y[i]]++ == 0)
            cnt++;

    return (cnt == n) ? "I become the guy." : "Oh, my keyboard!";
}

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    int *x = (int *)malloc(p * sizeof(int));
    for (int i = 0; i < p; i++)
        scanf("%d", &x[i]);

    int q;
    scanf("%d", &q);
    int *y = (int *)malloc(q * sizeof(int));
    for (int i = 0; i < q; i++)
        scanf("%d", &y[i]);

    printf("%s", check(n, p, x, q, y));

    return 0;
}