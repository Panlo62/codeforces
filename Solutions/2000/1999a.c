#include <stdio.h>

int sum(int n)
{
    return n / 10 + n % 10;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", sum(n));
    }

    return 0;
}