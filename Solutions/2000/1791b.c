#include <stdio.h>
#include <stdlib.h>

int pass(int n, char *s)
{
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            x--;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'U')
            y++;
        else
            y--;

        if (x == 1 && y == 1)
            return 1;
    }

    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char *s = (char *)malloc((n + 1) * sizeof(char));
        scanf("%s", s);

        printf("%s\n", pass(n, s) ? "YES" : "NO");
    }

    return 0;
}