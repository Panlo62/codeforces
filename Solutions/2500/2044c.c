#include <stdio.h>

int seat(int m, int a, int b, int c)
{
    int cnt = 0;
    if (m > a)
    {
        if (c > m - a)
            c -= m - a, cnt += m;
        else
            cnt += a + c, c = 0;
    }
    else
        cnt += m;

    if (m > b)
    {
        if (c > m - b)
            c -= m - b, cnt += m;
        else
            cnt += b + c, c = 0;
    }
    else
        cnt += m;

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);

        printf("%d\n", seat(m, a, b, c));
    }

    return 0;
}