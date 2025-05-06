#include <stdio.h>

void solve(int n, int x)
{
    long long packs = x;
    int kids = 0;
    while (n--)
    {
        char c;
        int x;
        scanf("%c %d", &c, &x);

        if (c == '-')
        {
            if (x > packs)
                kids++;
            else
                packs -= x;
        }
        else
            packs += x;
    }

    printf("%lld %d", packs, kids);
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    solve(n, x);

    return 0;
}