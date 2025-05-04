#include <stdio.h>

int ord(int n)
{
    int cnt = 0;

    for (int i = 1; i < 1e9; i = i * 10 + 1)
        for (int k = 1; k < 10; k++)
            if (i * k <= n)
                cnt++;
            else
                break;

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", ord(n));
    }

    return 0;
}