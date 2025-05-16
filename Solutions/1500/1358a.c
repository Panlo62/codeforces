#include <stdio.h>

int lanterns(int n, int m)
{
    return (n * m + 1) / 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        printf("%d\n", lanterns(n, m));
    }

    return 0;
}