#include <stdio.h>
#include <stdlib.h>

short mins(short a, short b) { return (a < b) ? a : b; }

short moves(short n, short *a)
{
    short mini = 0, maxi = 0;
    for (short i = 0; i < n; i++)
        if (a[i] > a[maxi])
            maxi = i;
        else if (a[i] < a[mini])
            mini = i;

    return mins(
        mins(((maxi > mini) ? n - maxi + mini + 1 : n - mini + maxi + 1),
             ((maxi > mini) ? n - mini : n - maxi)),
        ((maxi > mini) ? maxi + 1 : mini + 1));
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

        printf("%hd\n", moves(n, a));
    }

    return 0;
}