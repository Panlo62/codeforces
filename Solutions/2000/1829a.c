#include <stdio.h>

int diff(char *s)
{
    char *s2 = "codeforces";
    int cnt = 0;

    while (*s != '\0')
        if (*s++ != *s2++)
            cnt++;

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[11];
        scanf("%s", s);

        printf("%d\n", diff(s));
    }

    return 0;
}