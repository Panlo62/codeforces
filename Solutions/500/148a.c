#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int suffer(int k, int l, int m, int n, int d)
{
    int n1 = d / k + d / l + d / m + d / n;

    int lcm_kl = lcm(k, l), lcm_km = lcm(k, m), lcm_kn = lcm(k, n), lcm_lm = lcm(l, m), lcm_ln = lcm(l, n), lcm_mn = lcm(m, n);
    int n2 = d / lcm_kl + d / lcm_km + d / lcm_kn + d / lcm_lm + d / lcm_ln + d / lcm_mn;

    int lcm_klm = lcm(lcm_kl, m), lcm_kln = lcm(lcm_kl, n), lcm_kmn = lcm(lcm_km, n), lcm_lmn = lcm(lcm_lm, n);
    int n3 = d / lcm_kln + d / lcm_klm + d / lcm_lmn + d / lcm_kmn;

    int lcm_klmn = lcm(lcm_klm, n);
    int n4 = d / lcm_klmn;

    return n1 - n2 + n3 - n4;
}

int main()
{
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    printf("%d", suffer(k, l, m, n, d));

    return 0;
}