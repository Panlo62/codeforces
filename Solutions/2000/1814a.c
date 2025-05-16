#include <stdio.h>

int poss(long long n, long long k)
{
    if (n % 2 == 0)
        return 1;
    return (k % 2) && (n >= k);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        printf("%s\n", poss(n, k) ? "YES" : "NO");
    }

    return 0;
}