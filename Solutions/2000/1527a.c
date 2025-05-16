#include <stdio.h>

int find_k(int n)
{
    short i = 0;
    while (n)
        n >>= 1, i++;

    return (1 << (i - 1)) - 1;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", find_k(n));
    }

    return 0;
}