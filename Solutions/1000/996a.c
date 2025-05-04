#include <stdio.h>

int bills(int n)
{
    int min_bills = 0;
    int d[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        min_bills += n / d[i];
        n %= d[i];
    }

    return min_bills;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", bills(n));

    return 0;
}