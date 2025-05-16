#include <stdio.h>

long long sum(long long n)
{
    long long res = n;
    while (n != 1)
        n /= 2, res += n;
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);

        printf("%lld\n", sum(n));
    }

    return 0;
}