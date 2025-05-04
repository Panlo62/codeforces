#include <stdio.h>

int borrow(int k, int n, int w)
{
    int req = w * (w + 1) / 2 * k;
    if (n >= req)
        return 0;
    else
        return req - n;
}

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    printf("%d", borrow(k, n, w));

    return 0;
}