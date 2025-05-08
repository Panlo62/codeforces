#include <stdio.h>

int zero(int a, int b)
{
    if (a & 1)
        return 0;
    else if (b & 1 && a < 2)
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%s\n", zero(a, b) ? "YES" : "NO");
    }

    return 0;
}