#include <stdio.h>

char erase(char *s)
{
    int cnt[3] = {0, 0, 0};
    while (*s != '\0')
        cnt[*s++ - 'A']++;

    return cnt[1] == cnt[0] + cnt[2];
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        char s[51];
        scanf("%s", s);

        printf("%s\n", erase(s) ? "YES" : "NO");
    }

    return 0;
}