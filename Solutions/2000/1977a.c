#include <stdio.h>

int lower(int n, int m)
{
    if (n < m || ((n & 1) != (m & 1)))
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        printf("%s\n", lower(n, m) ? "YES" : "NO");
    }

    return 0;
}