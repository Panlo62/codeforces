#include <stdio.h>

int len(char *s)
{
    int cnt = 1;
    char prev = *s++;
    while (*s != '\0')
    {
        if (*s == prev)
            return 1;
        prev = *s++;
        cnt++;
    }

    return cnt;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);

        printf("%d\n", len(s));
    }

    return 0;
}