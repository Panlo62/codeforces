#include <stdio.h>

int sq(int l, int r, int d, int u)
{
    return l == r && l == d && l == u;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r, d, u;
        scanf("%d %d %d %d", &l, &r, &d, &u);

        printf("%s\n", sq(l, r, d, u) ? "YES" : "NO");
    }

    return 0;
}