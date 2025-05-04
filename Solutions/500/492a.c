#include <stdio.h>

int ht(int n)
{
    int h = 0;

    while (n >= 0)
    {
        h++;
        n -= h * (h + 1) / 2;
    }

    return h-1;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", ht(n));

    return 0;
}