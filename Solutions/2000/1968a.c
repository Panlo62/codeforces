#include <stdio.h>

int find_y(int x)
{
    return x - 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);

        printf("%d\n", find_y(x));
    }

    return 0;
}