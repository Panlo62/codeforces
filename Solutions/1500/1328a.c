#include <stdio.h>

int moves(int a, int b)
{
    return (b - a % b) % b;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", moves(a, b));
    }

    return 0;
}