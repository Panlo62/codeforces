#include <stdio.h>

void cand(int a, int b, int c)
{
    int maxa = (b > c ? b : c);
    int maxb = (a > c ? a : c);
    int maxc = (a > b ? a : b);

    printf("%d ", (a > maxa) ? 0 : maxa - a + 1);
    printf("%d ", (b > maxb) ? 0 : maxb - b + 1);
    printf("%d\n", (c > maxc) ? 0 : maxc - c + 1);
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        cand(a, b, c);
    }

    return 0;
}