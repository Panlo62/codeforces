#include <stdio.h>
#include <stdlib.h>

int same(int n, int *a)
{
    int cnt = 1, ind = 0;

    for (int i = 1; i < 3; i++)
        if (a[ind] == a[i])
            cnt++;
        else
            ind = i, cnt = 1;

    if (cnt == 1)
        return (a[0] == a[2]) ? 2 : 3;
    else if (cnt == 2)
        return 1;
    else
        for (int i = 3; i < n; i++)
            if (a[ind] != a[i])
                return i + 1;
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

        printf("%d\n", same(n, a));
    }

    return 0;
}