#include <stdio.h>
#include <stdlib.h>

char check(short n, short d, short *a)
{
    short mini = 0, smini = -1, maxi = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[maxi])
            maxi = i;
        if (a[i] < a[mini])
            smini = mini , mini = i;
        else if (smini == -1 || a[i] < a[smini])
            smini = i;
    }

    if (a[mini] + a[smini] > d && a[maxi] > d)
        return 0;
    return 1;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        short n, d;
        scanf("%hd %hd", &n, &d);
        short *a = (short *)malloc(n * sizeof(short));
        for (short i = 0; i < n; i++)
            scanf("%hd", &a[i]);

        printf("%s\n", check(n, d, a) ? "YES" : "NO");
    }

    return 0;
}