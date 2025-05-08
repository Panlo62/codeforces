#include <stdio.h>

int find_a(int x1, int x2, int x3)
{
    int max = (x1 > x2) ? x1 : x2;
    if (max < x3)
        max = x3;

    int min = (x1 < x2) ? x1 : x2;
    if (min > x3)
        min = x3;

    return max - min;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x1, x2, x3;
        scanf("%d %d %d", &x1, &x2, &x3);

        printf("%d\n", find_a(x1, x2, x3));
    }

    return 0;
}