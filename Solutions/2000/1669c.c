#include <stdio.h>
#include <stdlib.h>

char parity(short n, short *a)
{
    for (int i = 2; i < n; i++)
        if ((a[i] & 1) != (a[i - 2] & 1))
            return 0;
    return 1;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        short n;
        scanf("%hd", &n);
        short *a = (short *)malloc(n * sizeof(short));
        for (int i = 0; i < n; i++)
            scanf("%hd", &a[i]);

        printf("%s\n", parity(n, a) ? "YES" : "NO");
    }

    return 0;
}