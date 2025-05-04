#include <stdio.h>
typedef long long ll;

int is_sq(ll n)
{
    ll l = 1, r = 1e9;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (mid * mid == n)
            return 1;
        else if (mid * mid > n)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return 0;
}

int sq(int n)
{
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }

    return is_sq(sum);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%s\n", sq(n) ? "YES" : "NO");
    }

    return 0;
}