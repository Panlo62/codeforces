#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007

long long mod_pow(long long base, long long exp, long long mod)
{
    long long result = 1;
    base %= mod;

    while (exp > 0)
    {
        if (exp % 2)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}

long long gcd(long long p, long long q)
{
    while (p != q)
    {
        if (p > q)
            p -= q;
        else
            q -= p;
    }
    return p;
}

int prob(int n, long long m, int *s1, int *s2)
{
    long long p = 0, q = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s1[i] == 0 && s2[i] == 0)
            p = ((m * p) % MOD + q * (m * (m - 1) / 2) % MOD) % MOD, q = ((m * m) % MOD * q) % MOD;
        else if (s1[i] == 0)
            p = (p + q * (m - s2[i])) % MOD, q = (m * q) % MOD;
        else if (s2[i] == 0)
            p = (p + q * (s1[i] - 1)) % MOD, q = (m * q) % MOD;
        else if (s1[i] > s2[i])
            p = q = 1;
        else if (s1[i] < s2[i])
            p = 0, q = 1;
    }

    if (p == 0)
        return 0;
    long long g = gcd(p, q);

    long long q_inv = mod_pow(q / g, MOD - 2, MOD);
    return (MOD + (p / g * q_inv) % MOD) % MOD;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int *s1 = (int *)malloc(n * sizeof(int));
    int *s2 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &s1[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &s2[i]);

    printf("%d\n", prob(n, m, s1, s2));

    return 0;
}