#include <stdio.h>
#include <stdlib.h>

int blank(int n, int *a)
{
    int cnt = 0, curr = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 1)
            cnt = (curr > cnt) ? curr : cnt, curr = 0;
        else
            curr++;

    return (cnt > curr) ? cnt : curr;
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

        printf("%d\n", blank(n, a));
    }

    return 0;
}