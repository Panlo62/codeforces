#include <stdio.h>
#include <stdlib.h>

int teams(int n, int k, int *y)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (5 - y[i] >= k)
            cnt++;

    return cnt / 3;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int *y = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &y[i]);

    printf("%d", teams(n, k, y));
    return 0;
}