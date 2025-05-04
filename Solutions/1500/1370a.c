#include <stdio.h>

int max_gcd(int n)
{
    return n / 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", max_gcd(n));
    }

    return 0;
}