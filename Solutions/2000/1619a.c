#include <stdio.h>

int square(char *s)
{
    int n = 0;
    char *ptr = s;
    while (*ptr++)
        n++;

    if (n & 1)
        return 0;

    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n / 2 + i])
            return 0;

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);

        printf("%s\n", square(s) ? "YES" : "NO");
    }

    return 0;
}