#include <stdio.h>
#include <stdlib.h>

int people(int n, int k, int *a)
{
    int cnt = 0, gold = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (gold)
                gold--, cnt++;
        }
        else if (a[i] >= k)
        {
            gold += a[i];
        }
    }

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%d\n", people(n, k, a));
    }

    return 0;
}