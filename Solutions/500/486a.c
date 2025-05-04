#include <stdio.h>

long long calculate(long long n)
{
    long long fn = (n + 1) / 2;

    return (n & 1) ? -fn : fn;
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%lld", calculate(n));

    return 0;
}