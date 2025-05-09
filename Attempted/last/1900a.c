#include <stdio.h>
#include <stdlib.h>

int moves(int n, char *s)
{
    int cnt = (s[0] == '.') ? 1 : 0;

    for (int i = 1; i < n - 1; i++)
        if (s[i] == '.' && s[i + 1] == '.')
            cnt++;

    if (s[n - 1] == '.')
        cnt++;

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
        char *s = (char *)malloc((n + 1));
        scanf("%s", s);

        printf("%d\n", moves(n, s));
    }

    return 0;
}