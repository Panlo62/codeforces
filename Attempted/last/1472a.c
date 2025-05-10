#include <stdio.h>

char div(int w, int h, int n)
{
    int sheets = 1;
    while (h % 2 == 0)
        h /= 2, sheets *= 2;

    n -= sheets;
    while (n > 0 && w % 2 == 0)
        n -= sheets, w /= 2;

    if (n > 0)
        return 0;
    return 1;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int w, h, n;
        scanf("%d %d %d", &w, &h, &n);

        printf("%s\n", div(w, h, n) ? "YES" : "NO");
    }

    return 0;
}