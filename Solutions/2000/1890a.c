#include <stdio.h>
#include <stdlib.h>

int good(int n, int *a)
{
    int cnt1 = 1, cnt2 = 0, ele1 = a[0], ele2 = -1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] != ele1)
        {
            if (ele2 == -1 || a[i] == ele2)
                ele2 = a[i], cnt2++;
            else
                return 0;
        }
        else
            cnt1++;
    }

    if (cnt1 != n && cnt2 != n && (cnt1 - cnt2 > 1 || cnt1 - cnt2 < -1))
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
        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%s\n", good(n, a) ? "YES" : "NO");
    }

    return 0;
}