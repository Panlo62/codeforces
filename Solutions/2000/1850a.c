#include <stdio.h>

int check(int a, int b, int c)
{
    int sum = a + b + c;
    if (a > b)
        a = b;
    if (a > c)
        a = c;

    return sum - a > 9;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%s\n", check(a, b, c) ? "YES" : "NO");
    }

    return 0;
}