#include <stdio.h>

int sticks(int n)
{
    return n / 2 + n % 2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", sticks(n));
    }

    return 0;
}