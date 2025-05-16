#include <stdio.h>
#include <stdlib.h>

int add(short n, short *a)
{
    int sum = 0;
    for (short i = 0; i < n; i++)
        sum += a[i];

    if (sum < n)
        return 1;
    else if (sum == n)
        return 0;
    else
        return sum - n;
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
        for (short i = 0; i < n; i++)
            scanf("%hd", &a[i]);

        printf("%d\n", add(n, a));
    }

    return 0;
}