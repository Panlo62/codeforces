#include <stdio.h>
#include <stdlib.h>

int check(int n, char *s)
{
    if (n != 5)
        return 0;

    if (s[0] != 'T' && s[1] != 'T' && s[2] != 'T' && s[3] != 'T' && s[4] != 'T')
        return 0;
    if (s[0] != 'i' && s[1] != 'i' && s[2] != 'i' && s[3] != 'i' && s[4] != 'i')
        return 0;
    if (s[0] != 'm' && s[1] != 'm' && s[2] != 'm' && s[3] != 'm' && s[4] != 'm')
        return 0;
    if (s[0] != 'u' && s[1] != 'u' && s[2] != 'u' && s[3] != 'u' && s[4] != 'u')
        return 0;
    if (s[0] != 'r' && s[1] != 'r' && s[2] != 'r' && s[3] != 'r' && s[4] != 'r')
        return 0;

    return 1;
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

        printf("%s\n", check(n, s) ? "YES" : "NO");
    }

    return 0;
}