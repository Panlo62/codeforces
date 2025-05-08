#include <stdio.h>

int pos(char *s, char *t)
{
    int i = 0;
    while (*t != '\0')
        if (*t++ == s[i])
            i++;

    return i + 1;
}

int main()
{
    char s[51], t[51];
    scanf("%s %s", s, t);

    printf("%d", pos(s, t));

    return 0;
}