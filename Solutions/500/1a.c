#include <stdio.h>

long long tiles(int n, int m, int a)
{
    return (long long)(n / a + (n % a != 0)) * (m / a + (m % a != 0));
}

int main()
{
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    printf("%lld", tiles(n, m, a));
    return 0;
}