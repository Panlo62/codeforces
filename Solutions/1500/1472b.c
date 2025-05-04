#include <stdio.h>
#include <stdlib.h>

int divide(int n, int *wt)
{
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
        if (wt[i] == 1)
            cnt1++;
        else
            cnt2++;

    if (cnt1 & 1)
        return 0;
    if (cnt2 & 1 && cnt1 == 0)
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *wt = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &wt[i]);

        printf("%s\n", divide(n, wt) ? "YES" : "NO");
    }

    return 0;
}