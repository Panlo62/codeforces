#include <stdio.h>

int winner(int a, int b)
{
    if ((a & 1) + (b & 1) == 1)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%s\n", winner(a, b) ? "Alice" : "Bob");
    }

    return 0;
}