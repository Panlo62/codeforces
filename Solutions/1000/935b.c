#include <stdio.h>

int coins(int n)
{
    char prev = 0;
    int u = 0, r = 0, pay = 0;

    for (int i = 0; i < n; i++)
    {
        char move;
        scanf("%c", &move);

        if (prev != 0 && u == r && move == prev)
            pay++;

        prev = move;
        if (move == 'U')
            u++;
        else
            r++;
    }

    return pay;
}

int main()
{
    int n;
    scanf("%d\n", &n);

    printf("%d", coins(n));

    return 0;
}