#include <stdio.h>

int min(int a, int b)
{
    return (a > b) ? b : a;
}

int max(int a, int b)
{
    return (a < b) ? b : a;
}

int area(int a, int b)
{
    int side = min(max(2 * b, a), max(2 * a, b));
    return side * side;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", area(a, b));
    }

    return 0;
}