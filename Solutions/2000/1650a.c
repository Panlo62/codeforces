#include <stdio.h>

char equal(char *s, char c)
{
    if (*s++ == c)
        return 1;

    while (*s++ != '\0' && *s != '\0')
        if (*s++ == c)
            return 1;

    return 0;
}

int main()
{
    short t;
    scanf("%hd", &t);
    while (t--)
    {
        char s[50], c;
        scanf("%s %c", s, &c);

        printf("%s\n", equal(s, c) ? "YES" : "NO");
    }

    return 0;
}