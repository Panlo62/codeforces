#include <stdio.h>

int medium(int a, int b, int c)
{
    int max = a, min = a;
    if (b > max)
        max = b;
    else if (b < min)
        min = b;
    if (c > max)
        max = c;
    else if (c < min)
        min = c;

    return a + b + c - max - min;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%d\n", medium(a, b, c));
    }

    return 0;
}