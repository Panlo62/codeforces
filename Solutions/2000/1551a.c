#include <stdio.h>

void coins(int n)
{
    printf("%d %d\n", n / 3 + (n % 3 == 1), n / 3 + (n % 3 == 2));
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        coins(n);
    }

    return 0;
}