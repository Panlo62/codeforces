#include <stdio.h>

int pairs(int n)
{
    return n - 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", pairs(n));
    }

    return 0;
}