#include <stdio.h>

int val(int a, int b)
{
    return b - a;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", val(a, b));
    }

    return 0;
}