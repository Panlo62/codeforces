#include <stdio.h>
#include <stdlib.h>

int moves(int n, int *a)
{
    int rem[3] = {0, 0, 0}, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = (sum + a[i]) % 3;
        rem[a[i] % 3]++;
    }

    if (sum == 0)
        return 0;
    else if (sum == 2)
        return 1;
    else
        return (rem[1]) ? 1 : 2;
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

        printf("%d\n", moves(n, a));
    }

    return 0;
}