#include <stdio.h>

int money(int a, int b)
{
    if (a == 0)
        return 1;
    return b * 2 + a + 1;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", money(a, b));
    }

    return 0;
}