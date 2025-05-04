#include <stdio.h>

int winner(int a, int b, int c)
{
    if (c & 1)
        return a >= b;
    else
        return a > b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf("%s\n", winner(a, b, c) ? "First" : "Second");
    }

    return 0;
}