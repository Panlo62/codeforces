#include <stdio.h>

int floors(int n, int x)
{
    if (n < 3)
        return 1;
    return 2 + (n - 3) / x;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);

        printf("%d\n", floors(n, x));
    }

    return 0;
}