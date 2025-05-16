#include <stdio.h>

void move(int x, int k)
{
    if (x % k)
        printf("1\n%d\n", x);
    else
        printf("2\n%d 1\n", x - 1);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, k;
        scanf("%d %d", &x, &k);

        move(x, k);
    }

    return 0;
}