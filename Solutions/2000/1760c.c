#include <stdio.h>
#include <stdlib.h>

void diff(int n, int *s)
{
    int maxi, smaxi;
    if (s[0] < s[1])
        maxi = s[1], smaxi = s[0];
    else
        maxi = s[0], smaxi = s[1];

    for (int i = 2; i < n; i++)
        if (s[i] > maxi)
            smaxi = maxi, maxi = s[i];
        else if (s[i] > smaxi)
            smaxi = s[i];

    for (int i = 0; i < n; i++)
        if (s[i] < maxi)
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