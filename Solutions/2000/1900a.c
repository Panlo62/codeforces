#include <stdio.h>
#include <stdlib.h>

int moves(int n, char *s)
{
    int cnt = 0, empty = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            empty++;
            if (++cnt == 3)
                return 2;
        }
        else
            cnt = 0;
    }

    return empty;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char *s = (char *)malloc(n + 1);
        scanf("%s", s);

        printf("%d\n", moves(n, s));
    }

    return 0;
}