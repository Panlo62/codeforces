#include <stdio.h>

int dials(int x)
{
    int cnt = 10 * ((x % 10) - 1), i = 1;
    while (x)
        cnt += i, i++, x /= 10;

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);

        printf("%d\n", dials(x));
    }

    return 0;
}