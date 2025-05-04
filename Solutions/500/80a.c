#include <stdio.h>

int prime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int next(int n)
{
    while (1)
        if (prime(++n))
            return n;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%s", (next(n) == m) ? "YES" : "NO");

    return 0;
}