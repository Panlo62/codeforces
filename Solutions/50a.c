#include <stdio.h>

int max_domino(int m, int n)
{
    return m * n / 2;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    printf("%d", max_domino(m, n));

    return 0;
}