#include <stdio.h>

int call(int a, int b, int c)
{
    int first = a, second = ((b < c) ? c + c - b : b);
    if (first < second)
        return 1;
    else if (first > second)
        return 2;
    else
        return 3;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%d\n", call(a, b, c));
    }

    return 0;
}