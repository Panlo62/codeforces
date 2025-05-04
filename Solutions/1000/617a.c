#include <stdio.h>

int moves(int x)
{
    return x / 5 + (x % 5 != 0);
}

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d", moves(x));

    return 0;
}