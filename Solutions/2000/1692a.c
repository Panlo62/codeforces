#include <stdio.h>

int place(int a, int b, int c, int d)
{
    int cnt = 0;
    if (b > a)
        cnt++;
    if (c > a)
        cnt++;
    if (d > a)
        cnt++;
    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        printf("%d\n", place(a, b, c, d));
    }

    return 0;
}