#include <stdio.h>

int animals(int n)
{
    n /= 2;
    return n / 2 + n % 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", animals(n));
    }

    return 0;
}