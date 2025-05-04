#include <stdio.h>

int check(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max == a + b + c - max;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%s\n", (check(a, b, c)) ? "YES" : "NO");
    }

    return 0;
}