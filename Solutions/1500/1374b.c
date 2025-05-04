#include <stdio.h>

int moves(int n)
{
    int cnt2 = 0, cnt3 = 0;
    while (n % 2 == 0)
    {
        cnt2++;
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cnt3++;
        n /= 3;
    }

    if (n != 1 || cnt2 > cnt3)
        return -1;

    return 2 * cnt3 - cnt2;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", moves(n));
    }

    return 0;
}