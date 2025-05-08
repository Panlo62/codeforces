#include <stdio.h>
#include <stdlib.h>

int prob(int n, int m, char *a)
{
    int *diff = (int *)calloc(7, sizeof(int));
    for (int i = 0; i < n; i++)
        diff[a[i] - 'A']++;

    int res = 0;
    for (int i = 0; i < 7; i++)
        if (m > diff[i])
            res += m - diff[i];

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        char *a = (char *)malloc((n + 1) * sizeof(char));
        scanf("%s", a);

        printf("%d\n", prob(n, m, a));
    }

    return 0;
}