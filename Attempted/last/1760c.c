#include <stdio.h>
#include <stdlib.h>

void diff(int n, int *s)
{
    int maxi = 0, flag = 0, smaxi = 0;
    for (int i = 1; i < n; i++)
        if (s[i] > s[maxi])
            maxi = i;
        else if (s[i] == s[maxi])
            smaxi = i;

    for (int i = 0; i < n; i++)
        if (flag || s[i] != maxi)
            s[i] -= maxi;
        else
            s[i] -= smaxi;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *s = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &s[i]);

        diff(n, s);
        for (int i = 0; i < n; i++)
            printf("%d ", s[i]);
        printf("\n");
    }

    return 0;
}