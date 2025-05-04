#include <stdio.h>

int diff(int a, int b, int c)
{
    return a ^ b ^ c;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%d\n", diff(a, b, c));
    }

    return 0;
}