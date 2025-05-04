#include <stdio.h>

int distribute(int n)
{
    return n / 2 - 1 + n % 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", distribute(n));
    }
    return 0;
}