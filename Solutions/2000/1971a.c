#include <stdio.h>

void minmax(int *x, int *y)
{
    if (*x > *y)
    {
        int t = *y;
        *y = *x;
        *x = t;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        minmax(&x, &y);
        printf("%d %d\n", x, y);
    }

    return 0;
}