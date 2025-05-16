#include <stdio.h>

short div(short n)
{
    if (n % 10 < n % 7)
        return n + 7 - n % 7;
    else
        return n - n % 7;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        short n;
        scanf("%hd", &n);

        printf("%hd\n", div(n));
    }

    return 0;
}